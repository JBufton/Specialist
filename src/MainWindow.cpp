#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent), m_ui(new Ui::MainWindow)
{
  m_ui->setupUi(this);

  m_gl=new  NGLScene(this);

  m_ui->s_mainWindowGridLayout->addWidget(m_gl,0,0,2,1);

    connect(m_ui->WindX,SIGNAL(valueChanged(double)),m_gl,SLOT(SetWindXDir(double)));
    connect(m_ui->WindY,SIGNAL(valueChanged(double)),m_gl,SLOT(SetWindYDir(double)));
    connect(m_ui->WindZ,SIGNAL(valueChanged(double)),m_gl,SLOT(SetWindZDir(double)));



    connect(m_ui->NewPlaneX,SIGNAL(valueChanged(double)),m_gl,SLOT(SetNewPlaneXPos(double)));
    connect(m_ui->NewPlaneY,SIGNAL(valueChanged(double)),m_gl,SLOT(SetNewPlaneYPos(double)));
    connect(m_ui->NewPlaneZ,SIGNAL(valueChanged(double)),m_gl,SLOT(SetNewPlaneZPos(double)));

    connect(m_ui->NewPlaneXSize,SIGNAL(valueChanged(double)),m_gl,SLOT(SetNewPlaneXSize(double)));
    connect(m_ui->NewPlaneZSize,SIGNAL(valueChanged(double)),m_gl,SLOT(SetNewPlaneZSize(double)));

    connect(m_ui->NewPlaneXRot,SIGNAL(valueChanged(double)),m_gl,SLOT(SetNewPlaneXRot(double)));
    connect(m_ui->NewPlaneZRot,SIGNAL(valueChanged(double)),m_gl,SLOT(SetNewPlaneZRot(double)));

    connect(m_ui->NewPlaneRoughness,SIGNAL(valueChanged(double)),m_gl,SLOT(SetNewPlaneRoughness(double)));

    connect(m_ui->CreatePlane,SIGNAL(clicked()),m_gl,SLOT(CreateNewPlane()));

    connect(m_ui->DeletePlane,SIGNAL(clicked()),m_gl,SLOT(DeletePlane()));


    connect(m_ui->DropsPerTick,SIGNAL(valueChanged(int)),m_gl,SLOT(SetDropsPerTick(int)));

    connect(m_ui->BoxSizeX,SIGNAL(valueChanged(double)),m_gl,SLOT(SetNewBoxXSize(double)));
    connect(m_ui->BoxSizeY,SIGNAL(valueChanged(double)),m_gl,SLOT(SetNewBoxYSize(double)));
    connect(m_ui->BoxSizeZ,SIGNAL(valueChanged(double)),m_gl,SLOT(SetNewBoxZSize(double)));

    connect(m_ui->WindRes,SIGNAL(valueChanged(double)),m_gl,SLOT(SetWindCoefficient(double)));
    connect(m_ui->FrictionRes,SIGNAL(valueChanged(double)),m_gl,SLOT(SetCoefficientOfFriction(double)));


}

MainWindow::~MainWindow()
{
    delete m_ui;
}
