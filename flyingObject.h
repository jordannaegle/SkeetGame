//
//  flyingObject.h
//  Skeet
//
//  Created by Jordan Naegle on 2/28/21.
//

#ifndef flyingObject_h
#define flyingObject_h
#include "point.h"
#include "velocity.h"


class FlyingObject
{
public:
   FlyingObject()
   {
      //this->point = point;
      //this->velocity = velocity;
   }
protected:
   bool alive;
   Velocity velocity;
   Point point;
   
public:
   Point getPoint();
   Velocity getVelocity();
   void setPoint(Point point);
   void setVelocity(Velocity velocity);
   bool isAlive();
   void kill();
   void advance();
   
};

#endif /* flyingObject_h */
