#include <iostream>
#include <vector>

class plane
{

public:
    plane(float, float, float, float, float, float, float, float);  //creates plane at specified location and rotation

    float YPosAtLocation(float, float);
    float GetRoughness(){return Roughness;}

    void GetShape(float *);

private:
    float Pos[3];
    float XSize;
    float ZSize;
    float XRot;
    float ZRot;
    float Roughness;

};
