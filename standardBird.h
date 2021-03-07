//
//  standardBird.h
//  Skeet
//
//  Created by Jordan Naegle on 3/3/21.
//

#ifndef standardBird_h
#define standardBird_h

#include "bird.h"

class StandardBird : public Bird
{
public:
   StandardBird();
   //~StandardBird();
   
   virtual void draw();
   virtual int hit();
   
   
   
};

#endif /* standardBird_h */
