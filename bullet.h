//
//  bullet.h
//  Skeet
//
//  Created by Jordan Naegle on 2/28/21.
//

#ifndef bullet_h
#define bullet_h
#include "flyingObject.h"
#include "point.h"
#include "velocity.h"
#include <cmath> // used for sin, cos, and M_PI
#define BULLET_SPEED 10.0


class Bullet : public FlyingObject
{
public:
   Bullet();
   
   
private:
   float angle = 60;
   bool alive;
   

public:
   
   
   void fire(Point point, float angle);
   
   void draw();
};

#endif /* bullet_h */
