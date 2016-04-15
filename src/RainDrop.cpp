#include "RainDrop.h"

RainDrop::RainDrop(float BoxX, float BoxY, float BoxZ)
{

    Pos[0] = RandNum((BoxX/2)*-1, BoxX/2);
    Pos[1] = BoxY;
    Pos[2] = RandNum((BoxZ/2)*-1, BoxZ/2);

    Dir[0] = RandNum(-0.001, 0.001);
    Dir[1] = 0.0;
    Dir[2] = RandNum(-0.001, 0.001);

    Weight = RandNum(0.00001, 0.0005);

    Size = Weight*100;

    AttachedToObj = 0;

}




float RainDrop::RandNum(float Min, float Max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(Min, Max);

    return  dis(gen);
}





void RainDrop::Gravity(float *GravityArr)
{
    //(0.000000006673*59800000000000000000000000*Weight)/63800000
    //constant of 9.81N

    GravityArr[1] = (9.8*0.00005)*-1;

}




void RainDrop::Wind(float *OutVec)
{



}





void RainDrop::KeepInCube(float x, float y, float z)
{

    /*
   * Other walls cause for the drop to be deleted. Function
   * is in the RainCloud class "DeleteOnWallContact"
   * */

    if(Pos[1] >= y/2) //Positive Y wall
    {

        Pos[1] = y/2;

        if (Dir[1] >= 0)
        {

            Dir[1] = 0;

        }

    }

    if(Pos[1] <= (y/2)*-1) //Negative Y Wall
    {

        Pos[1] = (y/2)*-1;

        if (Dir[1] <= 0)
        {

            Dir[1] = 0;

        }

    }

}




float RainDrop::LengthOfVector(float x, float y, float z)
{

    float Temp = (x*x)+(z*z);
    float Length = sqrt(Temp+(y*y));

    return Length;
}




void RainDrop::WindResistance(float *WindResistanceArr, float Coefficient)
{
    float AreaFacingWind = ((2*Size)*(2*Size));
    float AirDensity = 0.45;  //  kg/m^3

    //---------------------X Air Resistance--------------------------------
    if (Dir[0] > 0.0)
    {

        WindResistanceArr[0] = (((AirDensity*Coefficient*AreaFacingWind)/2)*Dir[0]);

        WindResistanceArr[0] *=-1;
    }

    if (Dir[0] < 0.0)
    {

        WindResistanceArr[0] = (((AirDensity*Coefficient*AreaFacingWind)/2)*Dir[0]);

    }

    //--------------------Z Air Resistance----------------------------------

    if (Dir[2] > 0.0)
    {

        WindResistanceArr[2] = (((AirDensity*Coefficient*AreaFacingWind)/2)*Dir[2]);

        WindResistanceArr[2] *=-1;
    }

    if (Dir[2] < 0.0)
    {

        WindResistanceArr[2] = (((AirDensity*Coefficient*AreaFacingWind)/2)*Dir[2]);

    }

    //------------------Y Air Resistance------------------------------------

    if (Dir[1] > 0.0)
    {

        WindResistanceArr[1] = (((AirDensity*Coefficient*AreaFacingWind)/2)*Dir[1]);

        WindResistanceArr[1] *=-1;
    }

    if (Dir[1] < 0.0)
    {

        WindResistanceArr[1] = (((AirDensity*Coefficient*AreaFacingWind)/2)*Dir[1]);

    }

}


void RainDrop::GroundPlaneFriction(float *FrictionArr, float CoefficientOfFriction)
{

    float FrictionNormal = Weight*9.81;
    float FrictionalForce = CoefficientOfFriction*FrictionNormal;

    //---Friction on the X
    //Negative
    if (Dir[0] < 0)
    {

        if (Dir[0] >= (FrictionalForce*-1))
        {

            FrictionArr[0] = (Dir[0]*-1);

        }
        else
        {

            FrictionArr[0] = FrictionalForce;

        }

    }

    //Positive

    if (Dir[0] > 0)
    {

        if (Dir[0] <= FrictionalForce)
        {

            FrictionArr[0] = (Dir[0]*-1);

        }
        else
        {

            FrictionArr[0] = (FrictionalForce*-1);

        }

    }

    //---Friction on the Z
    //Negative
    if (Dir[2] < 0)
    {

        if (Dir[2] >= (FrictionalForce*-1))
        {

            FrictionArr[2] = (Dir[2]*-1);

        }
        else
        {

            FrictionArr[2] = FrictionalForce;

        }

    }

    //Positive

    if (Dir[2] > 0)
    {

        if (Dir[2] <= FrictionalForce)
        {

            FrictionArr[2] = (Dir[2]*-1);

        }
        else
        {

            FrictionArr[2] = (FrictionalForce*-1);

        }

    }

}



void RainDrop::Move(float BoxSizeX, float BoxSizeY, float BoxSizeZ, float *WindArr, float WindCoefficient, float CoefficientOfFriction)
{
    /*
   *
   *
   * Needs to check if collided with an object first,
   * if yes then run Object Reaction function and then run the rest of the influences
   *
   *
   * Need to somehow detect if the RainDrop is on a surface for a new set of influences
   * including how strong it sticks to the surface it is on
   *
   * When the raindrop hits the floor it either needs to disappear or it needs to slowly reduce speed
   *
   * */

    if (AttachedToObj == 0)
    {

      //---------Storing previous direction
      for (int i = 0; i < 3; i++)
      {

        PreviousDir[i] = Dir[i];

      }

        //---------------Calculate Gravity----------------
        float GravityArr[3] = {0.0, 0.0, 0.0};

        Gravity(&GravityArr[0]);

        //---------------Applying Gravity to Direction----

        for (int i = 0; i < 3; i++)
        {

            Dir[i] += GravityArr[i];

        }

        //---------------Apply W    float Coefficient = 0.5;ind influence----------

        for (int i = 0; i < 3; i++)
        {

            Dir[i] += WindArr[i];

        }

        //---------------Keeping in cube------------

        KeepInCube(BoxSizeX, BoxSizeY, BoxSizeZ);

        //---------------Applying Default Wind Resistance---------

        float WindResistanceArr[3] = {0.0, 0.0, 0.0};

        WindResistance(&WindResistanceArr[0], WindCoefficient);

        for (int i = 0; i < 3; i++)
        {

            Dir[i] += WindResistanceArr[i];

        }

        //----------Checking if Raindrop is at the bottom of the box and applying friction if so

        if (Pos[1] <= ((BoxSizeY/2)*-1))
        {

            float GroundFrictionArr[3] = {0.0, 0.0, 0.0};

            GroundPlaneFriction(&GroundFrictionArr[0], CoefficientOfFriction);


                Dir[0] += GroundFrictionArr[0]; //Only applies on X and Z axis
                Dir[2] += GroundFrictionArr[2];

            //-------Calculating Bounce of the Raindrop as it hits the ground

            if (OnGroundPreviousFrame == 0)
            {


              Dir[1] += ((PreviousDir[1]*-1)*RandNum(0.05,0.1)); //Multiplying by a random number between 0.1 and 0.2 to simulate the kinetic energy absorbed by the ground


            }

            OnGroundPreviousFrame = 1;


        }
        else OnGroundPreviousFrame = 0;


        //---------------Apply Direction to Position------

        for (int i = 0; i < 3; i++)
        {

            Pos[i] += Dir[i];

        }

    }

}
