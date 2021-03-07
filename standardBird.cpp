//
//  standardBird.cpp
//  Skeet
//
//  Created by Jordan Naegle on 3/3/21.
//

#include <stdio.h>
#include "standardBird.h"
#include "point.h"
#include "velocity.h"
#include "flyingObject.h"
#include "bird.h"
#include "uiDraw.h"

StandardBird :: StandardBird()
{
   if(point.getY() >= 0)
       {
         velocity.setDy(velocity.getDy() - 4);
       }
     else if (point.getY() < 0)
       {
        velocity.setDy(velocity.getDy() + 4);
       }
     velocity.setDx(velocity.getDx() + 3);
}

void StandardBird :: draw()
{
   drawCircle(point, 15);
}
             
int StandardBird :: hit()
{
   kill();
   return 1;
}
             
