//
//  bird.cpp
//  Skeet
//
//  Created by Jordan Naegle on 2/28/21.
//

#include <stdio.h>
#include "bird.h"
#include "uiDraw.h"
#include "velocity.h"
#include "point.h"
#include "flyingObject.h"
//#define BIRD_SPEED 3

Bird :: Bird()
{
   setPoint(Point(-200, random(-200,200)));
   velocity.setDx(velocity.getDx() + .5);
   alive = true;
}



