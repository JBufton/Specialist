#include <QMouseEvent>
#include <QGuiApplication>

#include "NGLScene.h"
#include <ngl/Camera.h>
#include <ngl/Light.h>
#include <ngl/Transformation.h>
#include <ngl/Material.h>
#include <ngl/NGLInit.h>
#include <ngl/VAOPrimitives.h>
#include <ngl/Random.h>
#include <ngl/ShaderLib.h>


//----------------------------------------------------------------------------------------------------------------------
/// @brief the increment for x/y translation with mouse movement
//----------------------------------------------------------------------------------------------------------------------
const static float INCREMENT=0.01;
//----------------------------------------------------------------------------------------------------------------------
/// @brief the increment for the wheel zoom
//----------------------------------------------------------------------------------------------------------------------
const static float ZOOM=0.1;

NGLScene::NGLScene()
{
  // re-size the widget to that of the parent (in this case the GLFrame passed in on construction)
  m_rotate=false;
  // mouse rotation values set to 0
  m_spinXFace=0;
  m_spinYFace=0;
  setTitle("Qt5 Simple NGL Demo");

  BoxSizeX = 2.0;
  BoxSizeY = 2.0;
  BoxSizeZ = 2.0;

  NumberOfDrops = 0;
  NumberOfPlanes = 0;
  DropsPerTick = 1;

  WindDir[0] = 0.00001;
  WindDir[1] = 0.0;
  WindDir[2] = 0.00001;

  m_data.resize(3*NumberOfDrops);
  Box.resize(58*sizeof(float));
  PlanesData.resize(18*NumberOfPlanes);

  CreateBox();
  MainRainCloud.AddPlane(0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0);

}







NGLScene::~NGLScene()
{
  std::cout<<"Shutting down NGL, removing VAO's and Shaders\n";
}







void NGLScene::CreateBox()
{

  //---------Box line generation

  Box[0].set((BoxSizeX/2)*-1,   (BoxSizeY/2)*-1,  (BoxSizeZ/2)*-1);
  Box[1].set((BoxSizeX/2),      (BoxSizeY/2)*-1,  (BoxSizeZ/2)*-1);

  Box[2].set((BoxSizeX/2),      (BoxSizeY/2)*-1,  (BoxSizeZ/2)*-1);
  Box[3].set((BoxSizeX/2),      (BoxSizeY/2)*-1,  (BoxSizeZ/2));

  Box[4].set((BoxSizeX/2),      (BoxSizeY/2)*-1,  (BoxSizeZ/2));
  Box[5].set((BoxSizeX/2)*-1,   (BoxSizeY/2)*-1,  (BoxSizeZ/2));

  Box[6].set((BoxSizeX/2)*-1,   (BoxSizeY/2)*-1,  (BoxSizeZ/2));
  Box[7].set((BoxSizeX/2)*-1,   (BoxSizeY/2)*-1,  (BoxSizeZ/2)*-1);


  Box[8].set((BoxSizeX/2)*-1,   (BoxSizeY/2),     (BoxSizeZ/2)*-1);
  Box[9].set((BoxSizeX/2),      (BoxSizeY/2),     (BoxSizeZ/2)*-1);

  Box[10].set((BoxSizeX/2),     (BoxSizeY/2),     (BoxSizeZ/2)*-1);
  Box[11].set((BoxSizeX/2),     (BoxSizeY/2),     (BoxSizeZ/2));

  Box[12].set((BoxSizeX/2),     (BoxSizeY/2),     (BoxSizeZ/2));
  Box[13].set((BoxSizeX/2)*-1,  (BoxSizeY/2),     (BoxSizeZ/2));

  Box[14].set((BoxSizeX/2)*-1,  (BoxSizeY/2),     (BoxSizeZ/2));
  Box[15].set((BoxSizeX/2)*-1,  (BoxSizeY/2),     (BoxSizeZ/2)*-1);


  Box[16].set((BoxSizeX/2)*-1,  (BoxSizeY/2)*-1,  (BoxSizeZ/2)*-1);
  Box[17].set((BoxSizeX/2)*-1,  (BoxSizeY/2),     (BoxSizeZ/2)*-1);

  Box[18].set((BoxSizeX/2),     (BoxSizeY/2)*-1,  (BoxSizeZ/2)*-1);
  Box[19].set((BoxSizeX/2),     (BoxSizeY/2),     (BoxSizeZ/2)*-1);

  Box[20].set((BoxSizeX/2),     (BoxSizeY/2)*-1,  (BoxSizeZ/2));
  Box[21].set((BoxSizeX/2),     (BoxSizeY/2),     (BoxSizeZ/2));

  Box[22].set((BoxSizeX/2)*-1,  (BoxSizeY/2)*-1,  (BoxSizeZ/2));
  Box[23].set((BoxSizeX/2)*-1,  (BoxSizeY/2),     (BoxSizeZ/2));

  //-------Grid line generation-------

  float j = -0.9;

  for (int i = 24; i <= 40;  i += 2)  //Grid on Z axis
  {

    Box[i].set((j*(BoxSizeX)+BoxSizeX/2), (BoxSizeY/2)*-1, (BoxSizeZ/2)*-1);
    Box[i+1].set((j*(BoxSizeX)+BoxSizeX/2),(BoxSizeY/2)*-1, (BoxSizeZ/2));

    j += 0.1;

  }

  j = -0.9;

  for (int i = 42; i <= 58;  i += 2)  //Grid on X axis
  {

    Box[i].set((BoxSizeX/2)*-1, (BoxSizeY/2)*-1, (j*(BoxSizeZ)+BoxSizeZ/2));
    Box[i+1].set((BoxSizeX/2), (BoxSizeY/2)*-1, (j*(BoxSizeZ)+BoxSizeZ/2));

    j += 0.1;

  }

}







void NGLScene::resizeGL(QResizeEvent *_event)
{
  m_width=_event->size().width()*devicePixelRatio();
  m_height=_event->size().height()*devicePixelRatio();
  // now set the camera size values as the screen size has changed
  m_cam.setShape(45.0f,(float)width()/height(),0.05f,350.0f);
}






void NGLScene::resizeGL(int _w , int _h)
{
  m_cam.setShape(45.0f,(float)_w/_h,0.05f,350.0f);
  m_width=_w*devicePixelRatio();
  m_height=_h*devicePixelRatio();
}







void NGLScene::initializeGL()
{
  // we need to initialise the NGL lib which will load all of the OpenGL functions, this must
  // be done once we have a valid GL context but before we call any GL commands. If we dont do
  // this everything will crash
  ngl::NGLInit::instance();

	glClearColor(0.4f, 0.4f, 0.4f, 1.0f);			   // Grey Background
	// enable depth testing for drawing

	glEnable(GL_DEPTH_TEST);
	glEnable(GL_MULTISAMPLE);
	// Now we will create a basic Camera from the graphics library
	// This is a static camera so it only needs to be set once
	// First create Values for the camera position
	ngl::Vec3 from(0,1,2);
	ngl::Vec3 to(0,0,0);
	ngl::Vec3 up(0,1,0);

	m_cam.set(from,to,up);
	// set the shape using FOV 45 Aspect Ratio based on Width and Height
	// The final two are near and far clipping planes of 0.5 and 10
	m_cam.setShape(45,(float)720.0/576.0,0.001,150);

// now to load the shader and set the values
	// grab an instance of shader manager
	ngl::ShaderLib *shader=ngl::ShaderLib::instance();
	shader->use("nglColourShader");
	shader->setRegisteredUniform4f("Colour",1,1,1,1);
	glViewport(0,0,width(),height());
  startTimer(5);
  glPointSize(5);

}








void NGLScene::paintGL()
{
	// clear the screen and depth buffer
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	// Rotation based on the mouse position for our global transform
	ngl::Transformation trans;
	// Rotation based on the mouse position for our global
	// transform
	ngl::Mat4 rotX;
	ngl::Mat4 rotY;
	// create the rotation matrices
	rotX.rotateX(m_spinXFace);
	rotY.rotateY(m_spinYFace);
	// multiply the rotations
	m_mouseGlobalTX=rotY*rotX;
	// add the translations
	m_mouseGlobalTX.m_m[3][0] = m_modelPos.m_x;
	m_mouseGlobalTX.m_m[3][1] = m_modelPos.m_y;
	m_mouseGlobalTX.m_m[3][2] = m_modelPos.m_z;
	ngl::ShaderLib *shader=ngl::ShaderLib::instance();
	(*shader)["nglColourShader"]->use();

	ngl::Mat4 MVP;
	MVP=m_mouseGlobalTX*m_cam.getVPMatrix();

	shader->setShaderParamFromMat4("MVP",MVP);




  ngl::VertexArrayObject *Boundary = ngl::VertexArrayObject::createVOA(GL_LINES);
  Boundary->bind();
  Boundary->setData(Box.size()*sizeof(ngl::Vec3), Box[0].m_x);
  Boundary->setVertexAttributePointer(0,3,GL_FLOAT,0,0);
  Boundary->setNumIndices(Box.size());

  Boundary->draw();
  Boundary->unbind();
  Boundary->removeVOA();

  //creating VAO for RainDrops
  ngl::VertexArrayObject *vao =ngl::VertexArrayObject::createVOA(GL_POINTS);
  vao->bind();
  vao->setData(m_data.size()*sizeof(ngl::Vec3),m_data[0].m_x);
  vao->setVertexAttributePointer(0,3,GL_FLOAT,0,0);
  vao->setNumIndices(m_data.size());

  vao->draw();
  vao->unbind();
  vao->removeVOA();

    //VAO for poly planes
  ngl::VertexArrayObject *Planes =ngl::VertexArrayObject::createVOA(GL_TRIANGLES);
  Planes->bind();
  Planes->setData(PlanesData.size()*sizeof(ngl::Vec3),PlanesData[0].m_x);
  Planes->setVertexAttributePointer(0,3,GL_FLOAT,0,0);
  Planes->setNumIndices(PlanesData.size());

  Planes->draw();
  Planes->unbind();
  Planes->removeVOA();

}







void NGLScene::timerEvent(QTimerEvent *_event)
{
  NGL_UNUSED(_event);
  m_data.clear();
  PlanesData.clear();



  MainRainCloud.SimulateFrame(BoxSizeX, BoxSizeY, BoxSizeZ, &WindDir[0], DropsPerTick);

  NumberOfPlanes = MainRainCloud.GetNumberOfPlanes();

  NumberOfDrops = MainRainCloud.GetNumberOfRainDrops();

  float PlanesShapes[18*NumberOfPlanes];

  float DropsPositions[NumberOfDrops*3];

  MainRainCloud.GetPlanesVertexs(&PlanesShapes[0]);

  MainRainCloud.GetDropsPositions(&DropsPositions[0]);

 PlanesData.resize(6*NumberOfPlanes);

  m_data.resize(3*NumberOfDrops);

  int j = 0;

  for (int i = 0; i < 18*NumberOfPlanes; i += 3)
  {

      PlanesData[j].m_x = PlanesShapes[i];
      PlanesData[j].m_y = PlanesShapes[i+1];
      PlanesData[j].m_z = PlanesShapes[i+2];

      j++;

  }



  j = 0;

  for (int i = 0; i < NumberOfDrops*3; i += 3)
  {

    m_data[j].m_x = DropsPositions[i];
    m_data[j].m_y = DropsPositions[i+1];
    m_data[j].m_z = DropsPositions[i+2];

    j++;
  }


  update();
}







//----------------------------------------------------------------------------------------------------------------------

void NGLScene::mouseMoveEvent (QMouseEvent * _event)
{
  // note the method buttons() is the button state when event was called
  // this is different from button() which is used to check which button was
  // pressed when the mousePress/Release event is generated
  if(m_rotate && _event->buttons() == Qt::LeftButton)
  {
    int diffx=_event->x()-m_origX;
    int diffy=_event->y()-m_origY;
    m_spinXFace += (float) 0.5f * diffy;
    m_spinYFace += (float) 0.5f * diffx;
    m_origX = _event->x();
    m_origY = _event->y();
    update();

  }
        // right mouse translate code
  else if(m_translate && _event->buttons() == Qt::RightButton)
  {
    int diffX = (int)(_event->x() - m_origXPos);
    int diffY = (int)(_event->y() - m_origYPos);
    m_origXPos=_event->x();
    m_origYPos=_event->y();
    m_modelPos.m_x += INCREMENT * diffX;
    m_modelPos.m_y -= INCREMENT * diffY;
    update();

   }
}







//----------------------------------------------------------------------------------------------------------------------

void NGLScene::mousePressEvent ( QMouseEvent * _event)
{
  // this method is called when the mouse button is pressed in this case we
  // store the value where the maouse was clicked (x,y) and set the Rotate flag to true
  if(_event->button() == Qt::LeftButton)
  {
    m_origX = _event->x();
    m_origY = _event->y();
    m_rotate =true;
  }
  // right mouse translate mode
  else if(_event->button() == Qt::RightButton)
  {
    m_origXPos = _event->x();
    m_origYPos = _event->y();
    m_translate=true;
  }

}






//----------------------------------------------------------------------------------------------------------------------

void NGLScene::mouseReleaseEvent ( QMouseEvent * _event )
{
  // this event is called when the mouse button is released
  // we then set Rotate to false
  if (_event->button() == Qt::LeftButton)
  {
    m_rotate=false;
  }
        // right mouse translate mode
  if (_event->button() == Qt::RightButton)
  {
    m_translate=false;
  }
}






//----------------------------------------------------------------------------------------------------------------------

void NGLScene::wheelEvent(QWheelEvent *_event)
{

	// check the diff of the wheel position (0 means no change)
	if(_event->delta() > 0)
	{
		m_modelPos.m_z+=ZOOM;
	}
	else if(_event->delta() <0 )
	{
		m_modelPos.m_z-=ZOOM;
	}
	update();
}






//----------------------------------------------------------------------------------------------------------------------

void NGLScene::keyPressEvent(QKeyEvent *_event)
{
  // this method is called every time the main window recives a key event.
  // we then switch on the key value and set the camera in the GLWindow
  switch (_event->key())
  {
  // escape key to quite
  case Qt::Key_Escape : QGuiApplication::exit(EXIT_SUCCESS); break;
  // turn on wirframe rendering
  case Qt::Key_W : glPolygonMode(GL_FRONT_AND_BACK,GL_LINE); break;
  // turn off wire frame
  case Qt::Key_S : glPolygonMode(GL_FRONT_AND_BACK,GL_FILL); break;
  // show full screen
  case Qt::Key_F : showFullScreen(); break;
  // show windowed
  case Qt::Key_N : showNormal(); break;
  default : break;
  }
  // finally update the GLWindow and re-draw
  //if (isExposed())
    update();
}
