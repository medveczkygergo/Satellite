/***********************************************************************
 * Source File:
 *    Acceleration : Represents an acceleration in the orbiter simulation
 * Author:
 *    Gergo Medveczky
 * Summary:
 *    Tracks the components of a 2-dimensional acceleration.
 ************************************************************************/

#include "acceleration.h"


 /*************************************************
 * Acceleration
 * The constructor for the acceleration class given
 * an angle and a magnitude.
 **************************************************/
Acceleration::Acceleration(const Angle& angle, double magnitude)
{
   // Calculate and set the horizontal and vertical components
   setDDX(magnitude * sin(angle.getRadians()));
   setDDY(magnitude * cos(angle.getRadians()));
}
