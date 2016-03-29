#include "RainCloud.h"

RainCloud::RainCloud() : NumberOfRainDrops(0)
{
}






void RainCloud::AddRainDrop()
{
  NumberOfRainDrops++;

  RainDropList.push_back(new RainDrop);

}






void RainCloud::AddMultipleRainDrops(int NumberToMake)
{

  for (int i = 0; i < NumberToMake; i++)
  {

    NumberOfRainDrops++;

    RainDropList.push_back(new RainDrop);



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




void RainCloud::SimulateFrame(float BoxSizeX, float BoxSizeY, float BoxSizeZ)
{

  for (int i = 0; i < NumberOfRainDrops; i++)
  {

    RainDropList[i]->Move(BoxSizeX, BoxSizeY, BoxSizeZ);

  }

  //AddMultipleRainDrops(RainDropsPerFrame);

}
