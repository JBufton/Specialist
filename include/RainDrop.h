#ifndef RAINDROP_H__
#define RAINDROP_H__

#include <iostream>
#include <random>
#include <math.h>

class RainDrop
{

  public:
    RainDrop(float, float, float);
    ~RainDrop() = default;

    //----------Getters and Setters
    float *GetDropPosition(){float *Out; Out = &Pos[0]; return Out;}
    float GetDropXPosition(){return Pos[0];}
    float GetDropYPosition(){return Pos[1];}
    float GetDropZPosition(){return Pos[2];}

    float *GetDropDirection(){float *Out; Out = &Dir[0]; return Out;}
    float GetDropXDirection(){return Dir[0];}
    float GetDropYDirection(){return Dir[1];}
    float GetDropZDirection(){return Dir[2];}

    float SetDropDirection(float, float, float);
    float SetDropPosition(float, float, float);

    //----------Attached to object functions----------
    int GetAttachedToObj(){return AttachedToObj;}
    void AttachToObj(){AttachedToObj = 1;}
    void DetachFromObj(){AttachedToObj = 0;}

    void Move(float, float, float, float *);



  private:
  float Pos[3];
  float Dir[3];
  float Weight;
  float Size;
  int AttachedToObj;


  float RandNum(float, float);

  void Gravity(float *);
  void KeepInCube(float, float, float);

  void Wind(float *);  //calculates the Winds effect
  void WindResistance(float *); //based upon the resulting direction etc calculates the wind resistance (strength depending upon the weight
  void GroundPlaneFriction(float *);    //Calculates the friction of the raindrops when they are on the floor
  float LengthOfVector(float, float, float);

};


#endif
