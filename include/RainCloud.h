#ifndef RAINCLOUD_H__
#define RAINCLOUD_H__

#include <iostream>
#include <vector>
#include "RainDrop.h"
#include "planeobj.h"

class RainCloud
{


  public:
    RainCloud();
    ~RainCloud() = default;

    //----------drop creation
    void AddRainDrop(float, float, float);
    void DeleteRainDrop(int);
    void AddMultipleRainDrops(int, float, float, float);

    //----------Plane creation----------
    void AddPlane(float, float, float, float, float, float, float, float);
    void DeletePlane();

    //----------Get Plane info---------
    void GetPlanesVertexs(float *);
    int GetNumberOfPlanes(){return NumberOfPlanes;}

    //----------drop simulation and info
    int GetNumberOfRainDrops(){ return NumberOfRainDrops; }
    void GetDropsPositions(float *);
    void GetDropPosition(int, float *);
    void SimulateFrame(float, float, float, float *, int);
    void DeleteOnWallContact(int, float, float);

    void SimulateDropOnObject(int);

    //-----------object creation and effects
    void CreatePlane(float *, float, float, float, float, float);


private:
  std::vector <RainDrop *> RainDropList;
  int NumberOfRainDrops;
  float WindStrength;

  int NumberOfPlanes;
  std::vector<plane *> PlaneList;

  std::vector<int> DropsAttachedToObj;
  int NumberOfDropsAttached;



};

#endif
