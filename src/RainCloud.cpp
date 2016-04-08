#include "RainCloud.h"

RainCloud::RainCloud()
{
    NumberOfRainDrops = 0;
    NumberOfPlanes = 0;

}






void RainCloud::AddRainDrop(float BoxX, float BoxY, float BoxZ)
{
  NumberOfRainDrops++;

  RainDropList.push_back(new RainDrop(BoxX, BoxY, BoxZ));

}





void RainCloud::AddPlane(float XPos, float YPos, float ZPos, float XSize, float ZSize, float XRot, float ZRot, float Roughness)
{

    NumberOfPlanes++;

    PlaneList.push_back(new plane(XPos, YPos, ZPos, XSize, ZSize, XRot, ZRot, Roughness));

}

void RainCloud::DeletePlane()
{

    PlaneList.pop_back();

    NumberOfPlanes--;

}





void RainCloud::AddMultipleRainDrops(int NumberToMake, float BoxX, float BoxY, float BoxZ)
{

  for (int i = 0; i < NumberToMake; i++)
  {

    NumberOfRainDrops++;

    RainDropList.push_back(new RainDrop(BoxX, BoxY, BoxZ));



  }

}






void RainCloud::GetDropPosition(int i, float *OutArray)
{

  OutArray[0] = RainDropList[i]->GetDropXPosition();
  OutArray[1] = RainDropList[i]->GetDropYPosition();
  OutArray[2] = RainDropList[i]->GetDropZPosition();

}






void RainCloud::GetDropsPositions(float *OutArray)
{
  int j = 0;

  for (int i = 0; i < NumberOfRainDrops; i++)
  {

    OutArray[j] = RainDropList[i]->GetDropXPosition();
    OutArray[j+1] = RainDropList[i]->GetDropYPosition();
    OutArray[j+2] = RainDropList[i]->GetDropZPosition();

    j += 3;

  }

}


void RainCloud::DeleteRainDrop(int DropNum)
{

    RainDropList.erase(RainDropList.begin() + DropNum);   //Doesn't work correctly
    NumberOfRainDrops--;

}

void RainCloud::DeleteOnWallContact(int i, float BoxSizeX, float BoxSizeZ)
{
    float DropX;
    float DropZ;

      DropX = RainDropList[i]->GetDropXPosition();
      DropZ = RainDropList[i]->GetDropZPosition();


      if (DropX > BoxSizeX/2)   //Positive X wall
      {

          DeleteRainDrop(i);

      }

      else if (DropX < (BoxSizeX/2)*-1) //Negative X wall
      {

          DeleteRainDrop(i);

      }

      else if (DropZ > BoxSizeZ/2)   //Positive Z wall
      {

          DeleteRainDrop(i);

      }

      else if (DropZ < (BoxSizeZ/2)*-1) //Negative Z wall
      {

          DeleteRainDrop(i);

      }


}



void RainCloud::GetPlanesVertexs(float *OutVec)
{

    float CurrentPlane[18];

    int k = 0;

    for (int i = 0; i < NumberOfPlanes; i++)
    {

        PlaneList[i]->GetShape(&CurrentPlane[0]);

        for(int j = 0; j < 18; j++)
        {

            OutVec[k+j] = CurrentPlane[j];

        }

        k += 18;

    }

}





void RainCloud::SimulateDropOnObject(int DropNumber)
{



}




void RainCloud::SimulateFrame(float BoxSizeX, float BoxSizeY, float BoxSizeZ, float *WindDir, int RainDropsPerFrame)
{
  //----------Add new raindrops to scene----------

  AddMultipleRainDrops(RainDropsPerFrame, BoxSizeX, BoxSizeY, BoxSizeZ);

  //---------populates list of drops that follow the attached to surface behaviour

  NumberOfDropsAttached = 0;
  DropsAttachedToObj.clear();

  for (int i = 0; i < NumberOfRainDrops; i++)
  {

    if (RainDropList[i]->GetAttachedToObj() == 1)
    {

        DropsAttachedToObj.push_back(i);

        NumberOfDropsAttached++;

    }

  }

  //----------Simulate drops that are attached to objects


  for (int i = 0; i < NumberOfDropsAttached; i++)
  {

    SimulateDropOnObject(DropsAttachedToObj[i]);

    DeleteOnWallContact(i, BoxSizeX, BoxSizeZ);

  }


  //----------Simulate free falling drops----------

  for (int i = 0; i < NumberOfRainDrops; i++)
  {

    RainDropList[i]->Move(BoxSizeX, BoxSizeY, BoxSizeZ, &WindDir[0]);

    DeleteOnWallContact(i, BoxSizeX, BoxSizeZ);

  }


  //----------Check for drops that have contacted an object and make them attached---------


}
