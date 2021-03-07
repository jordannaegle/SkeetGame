//
//  toughBird.cpp
//  Skeet
//
//  Created by Jordan Naegle on 3/3/21.
//

#include <stdio.h>
#include "toughBird.h"
#include "bird.h"
#include "uiDraw.h"

ToughBird :: ToughBird()
{
   hitPoints = 3;
   if(point.getY() >= 0)
   {
      velocity.setDy(velocity.getDy() - 3);
   }
   else if (point.getY() < 0)
   {
      velocity.setDy(velocity.getDy() + 1);
   }
   velocity.setDx(velocity.getDx() + 0.1);
   
}

void ToughBird :: draw()
{
   drawToughBird(point, 15, hitPoints);
}

int ToughBird :: hit()
{
   hitPoints--;
   if (hitPoints == 0)
   {
      kill();
      return 3;
   }
   return 1;
}
