#include <iostream>
#include <vector>
#include <math.h>

class plane
{

public:
    plane(float, float, float, float, float, float, float, float);  //creates plane at specified location and rotation

    float YPosAtLocation(float, float);
    float GetRoughness(){return Roughness;}

    int IsOnPlane(float, float, float);
    void CalcNorm();
    void GetShape(float *);

private:
    float Pos[3];
    float Norm[3];
    float XSize;
    float ZSize;
    float XRot;
    float ZRot;
    float Roughness;

};
