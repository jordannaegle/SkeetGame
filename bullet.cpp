//
//  bullet.cpp
//  Skeet
//
//  Created by Jordan Naegle on 2/28/21.
//

#include "bullet.h"
#include "uiDraw.h"
#include <cmath> // used for sin, cos, and M_PI
#define BULLET_SPEED 10.0


Bullet :: Bullet()
{
   alive = true;
}

void Bullet::fire(Point point, float angle)
{
   
      this->point = point;
      float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));
      float dy = BULLET_SPEED * (sin(M_PI / 180.0 * angle));

      velocity.setDx(velocity.getDx() + dx);
      velocity.setDy(velocity.getDy() + dy);
   

}

void Bullet::draw()
{
   drawDot(point);
}
