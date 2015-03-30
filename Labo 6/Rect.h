//
//  Rect.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__Rect__
#define __Labo_6__Rect__

#include <stdio.h>
#include "PlaneFigure.h"

class Rect: public PlaneFigure {
	
	double width;
	double height;
	
public:
	
	Rect(double width, double height);
	
	double getArea() const { return width * height; }
	double getPerimeter() const { return 2*width + 2*height; }
	
};

#endif /* defined(__Labo_6__Rect__) */
