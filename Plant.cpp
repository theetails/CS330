/*
 *  Plant.cpp
 *  Game
 *
 *  Created by David Reed, Matt Oldfield, Jeremy Sampson, Andrew Daugherty
 *  and Alex Martishius
 *  Copyright 2011. All rights reserved.
 *
 */


//---------------------------------------------------------

#include "Plant.h"

//---------------------------------------------------------

Plant::Plant()
{
	setKillsBottom(true);
	setKillsSide(true);
	setKillsTop(true);
	setPoints(0);
	setXVelocity(2.0);
	setYVelocity(0.0);
}

//---------------------------------------------------------

Plant::~Plant()
{
    
}

//---------------------------------------------------------

void Plant::draw()
{

	glColor3ub(0, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2d(left(),bottom());
    glVertex2d(right(),bottom());
    glVertex2d(right(),top());
    glVertex2d(left(),top());
    glEnd();  
    
    
    
}

//---------------------------------------------------------

void Plant::shootFireball()
{

}

//---------------------------------------------------------

void Plant::move()
{

}

//---------------------------------------------------------
