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
