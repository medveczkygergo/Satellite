/***********************************************************************
 * Header File:
 *    Hubble Right-Part: A part of hubble after collision
 * Author:
 *    Gergo Medveczky
 * Summary:
 *    Is a Space Collider, and breaks into 2 fragments.
 ************************************************************************/

#ifndef HubbleRight_h
#define HubbleRight_h

#include "launchedObject.h"
#include <stdio.h>
class HubbleRight : public LaunchedObject
{
private:
    
public:
   // Non-Default Constructor for HubbleRight
   HubbleRight(const Angle& angle) : LaunchedObject(angle)
   {
      LaunchedObject* fragment1 = new Fragment(6.28319);
      LaunchedObject* fragment2 = new Fragment(2);
      launchedPieces.push_back(fragment1);
      launchedPieces.push_back(fragment2);
   }
    
   // Draw HubbleRight
   virtual void draw() const{drawHubbleRight(pos, direction.getRadians());}
    
   // Radius Getter for HubbleRight
   virtual double getRadius() const{return 4.0;}
};

#endif /* HubbleRight_h */
