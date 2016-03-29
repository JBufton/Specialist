#ifndef RAINCLOUD_H__
#define RAINCLOUD_H__

#include <iostream>
#include <vector>
#include "RainDrop.h"

class RainCloud
{


  public:
    RainCloud();
    ~RainCloud() = default;

    void AddRainDrop();
    void AddMultipleRainDrops(int);

    int GetNumberOfRainDrops(){ return NumberOfRainDrops; }
    void GetDropsPositions(float *);
    void GetDropPosition(int, float *);
    void SimulateFrame(float, float, float);


private:
  std::vector <RainDrop *> RainDropList;
  int NumberOfRainDrops;



};

#endif
