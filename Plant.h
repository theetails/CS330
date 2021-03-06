/*
 *  Plant.h
 *  Game
 *
 *  Created by David Reed, Matt Oldfield, Jeremy Sampson, Andrew Daugherty
 *  and Alex Martishius
 *  Copyright 2011. All rights reserved.
 *
 */


#ifndef __PLANT_H__
#define __PLANT_H__

//---------------------------------------------------------

#include "Movable.h"

//---------------------------------------------------------

class Plant: public Movable {
    
public:
	// openGL draw method
    virtual void draw();
	
    // constructor
    Plant();
    // destructor
    ~Plant();
    
    // methods

    // object type
    int objectType() { return plant_; }
    // method to shoot fireball from plant
    void shootFireball();
	// plant's move is different from the normal move
	void move();
    
};

//---------------------------------------------------------

#endif // _PLANT_H
