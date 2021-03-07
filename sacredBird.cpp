//
//  sacredBird.cpp
//  Skeet
//
//  Created by Jordan Naegle on 3/3/21.
//

#include <stdio.h>
#include "sacredBird.h"
#include "uiDraw.h"

SacredBird :: SacredBird()
{
   if(point.getY() >= 0)
     {
        velocity.setDy(velocity.getDy() - 4);
     }
     else if (point.getY() < 0)
     {
        velocity.setDy(velocity.getDy() + 3);
     }
      velocity.setDx(velocity.getDx() + 2);
}

void SacredBird :: draw()
{
   drawSacredBird(point, 15);
}

int SacredBird :: hit()
{
   kill();
   return -10;
}
