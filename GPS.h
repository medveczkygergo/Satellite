/***********************************************************************
 * Header File:
 *    GPS: A satellite that orbits the earth geosynchronously
 * Author:
 *    Gergo Medveczky
 * Summary:
 *    Is a Space Collider, and breaks into 3 pieces.
 ************************************************************************/

#pragma once
#include "SpaceCollider.h"
#include "GPSLeft.h"
#include "GPSRight.h"
#include "GPSCenter.h"

class GPS : public SpaceCollider
{
public:
    // Non-Default Constructor for GPS
    GPS(const Position& p, const Velocity& v) : SpaceCollider(p, v)
    {
       LaunchedObject* center = new GPSCenter(Angle(0.0));
       LaunchedObject* right = new GPSRight(Angle(2.0 * PI / 3.0));
       LaunchedObject* left = new GPSLeft(Angle(2.0 * 2.0 * PI / 3.0));
       launchedPieces.push_back(center);
       launchedPieces.push_back(right);
       launchedPieces.push_back(left);
    }
   // Draw GPS
   virtual void draw() const{drawGPS(pos, direction.getRadians());}
   // Radius Getter for GPS
   virtual double getRadius() const{return 6.0;}
};
