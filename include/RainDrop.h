#ifndef RAINDROP_H__
#define RAINDROP_H__

#include <iostream>
#include <random>
#include <math.h>

class RainDrop
{

  public:
    RainDrop();
    ~RainDrop() = default;


    float *GetDropPosition(){float *Out; Out = &Pos[0]; return Out;}
    float GetDropXPosition(){return Pos[0];}
    float GetDropYPosition(){return Pos[1];}
    float GetDropZPosition(){return Pos[2];}


    void Move(float, float, float);



  private:
  float Pos[3];
  float Dir[3];
  float Weight;
  float Size;


  float RandNum(float, float);

  void Gravity(float *);
  void KeepInCube(float, float, float);
  int ObjectContact();  //Checks if RainDrop has impacted an object
  void ObjectReaction();  //Calculates the new direction etc based upon the type of the object , the angle of collision etc
  void Wind();  //calculates the Winds effect
  void WindResistance(float *); //based upon the resulting direction etc calculates the wind resistance (strength depending upon the weight
  float LengthOfVector(float, float, float);

};


#endif
