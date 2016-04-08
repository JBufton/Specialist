#include "planeobj.h"

plane::plane(float XPos, float YPos, float ZPos, float NewXSize, float NewZSize, float NewXRot, float NewZRot, float NewRoughness)
{

    Pos[0] = XPos;
    Pos[1] = YPos;
    Pos[2] = ZPos;

    XSize = NewXSize;
    ZSize = NewZSize;
    XRot = NewXRot;
    ZRot = NewZRot;
    Roughness = NewRoughness;

    CalcNorm();

}



void plane::CalcNorm()
{
    //-----------Normal is defaulted as pointing up
    Norm[0] = 0.0;
    Norm[1] = 1.0;
    Norm[2] = 0.0;

    //----------Rotate normal according to XRot and ZRot



}




int plane::IsOnPlane(float TestX, float TestY, float TestZ)
{

    /*
     * Calculate the length of the vector between the point to test and the plane position (Test-Pos)
     *
     * Calculate the dot product between the new vector and the normal of the plane
     *
     * if the point it in front then result will be positive
     * if the point is behind the plane then the result will be negative
     * if the point is on the plane then the result will be 0
     *
     * then calculate if the point is within the boundaries of the actual plane shape
     *
     * */

}





void plane::GetShape(float *OutVec)
{

    std::vector <float> DefaultShape;

    //--------------------Traingle 1

    //----------Vertex 1
    DefaultShape.push_back(-0.5);
    DefaultShape.push_back(0.0);
    DefaultShape.push_back(-0.5);

    //----------Vertex 2
    DefaultShape.push_back(-0.5);
    DefaultShape.push_back(0.0);
    DefaultShape.push_back(0.5);

    //----------Vertex 3
    DefaultShape.push_back(0.5);
    DefaultShape.push_back(0.0);
    DefaultShape.push_back(0.5);

    //--------------------Traingle 2

    //----------Vertex 4
    DefaultShape.push_back(-0.5);
    DefaultShape.push_back(0.0);
    DefaultShape.push_back(-0.5);

    //----------Vertex 5
    DefaultShape.push_back(0.5);
    DefaultShape.push_back(0.0);
    DefaultShape.push_back(0.5);

    //----------Vertex 6
    DefaultShape.push_back(0.5);
    DefaultShape.push_back(0.0);
    DefaultShape.push_back(-0.5);

    //----------Making plane the correct size

    //----------XSize
    for (int i = 0; i < 18; i += 3)
    {

        DefaultShape[i] *= XSize;

    }

    //----------ZSize
    for (int i = 2; i < 18; i += 3)
    {

        DefaultShape[i] *= ZSize;

    }

    //-------------------------------------Rotate matrix of points by the XRot and ZRot variables

    //---------------------------------------Moving plane according to its position


    for (int i = 0; i < 18; i += 3)
    {

        DefaultShape[i] += Pos[0];
        DefaultShape[i+1] += Pos[1];
        DefaultShape[i+2] += Pos[2];

    }



    //----------Loading data onto Output vector

    for (int i = 0; i < 18; i ++)
    {

        OutVec[i] = DefaultShape[i];

    }

}
