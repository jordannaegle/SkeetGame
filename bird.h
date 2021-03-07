//
//  bird.h
//  Skeet
//
//  Created by Jordan Naegle on 2/28/21.
//

#ifndef bird_h
#define bird_h
#include "flyingObject.h"



class Bird : public FlyingObject
{
public:
   Bird();
   virtual ~Bird()
   {
      
   }
   
protected:
   int hitPoints;
   
private:
  
   
public:
   
   //void createBird(Point point, float angle); //TODO wouldn't this be the constructor...? Referenced in game.h
  
   
   virtual int hit() = 0;
   virtual void draw() = 0; // needs to be within the specific birds
   
   
};

#endif /* bird_h */
