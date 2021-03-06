/*
 *  Mushroom.cpp
 *  Game
 *
 *  Created by David Reed, Matt Oldfield, Jeremy Sampson, Andrew Daugherty
 *  and Alex Martishius
 *  Copyright 2011. All rights reserved.
 *
 */


//---------------------------------------------------------

#include "Mushroom.h"

//---------------------------------------------------------

Mushroom::Mushroom()
{
	setKillsBottom(false);
	setKillsSide(false);
	setKillsTop(false);
	setPoints(0);
	setXVelocity(2.0);
	setYVelocity(0.0);
}

//---------------------------------------------------------

Mushroom::~Mushroom()
{
    
}

//---------------------------------------------------------

void Mushroom::draw()
{
    
    
    
	glColor3ub(255,182,193);
    glBegin(GL_POLYGON);
    glVertex2d(left(),bottom());
    glVertex2d(right(),bottom());
    glVertex2d(right(),top());
    glVertex2d(left(),top());
    glEnd();
    
    
    
    
    
    
    
}

//---------------------------------------------------------
