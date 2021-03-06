/*
 *  Star.cpp
 *  Game
 *
 *  Created by David Reed, Matt Oldfield, Jeremy Sampson, Andrew Daugherty
 *  and Alex Martishius
 *  Copyright 2011. All rights reserved.
 *
 */


//---------------------------------------------------------

#include "Star.h"

//---------------------------------------------------------

Star::Star()
{
	setKillsBottom(false);
	setKillsSide(false);
	setKillsTop(false);
	setPoints(0);
	setXVelocity(2.0);
	setYVelocity(0.0);
}

//---------------------------------------------------------

Star::~Star()
{
    
}

//---------------------------------------------------------

void Star::draw()
{
    
	glColor3ub(255, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2d(left(),bottom());
    glVertex2d(right(),bottom());
    glVertex2d(right(),top());
    glVertex2d(left(),top());
    glEnd(); 
    
    
    
    
    
    
    
    
    
}

//---------------------------------------------------------
