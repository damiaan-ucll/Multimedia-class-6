//
//  PlaneFigure.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__PlaneFigure__
#define __Labo_6__PlaneFigure__

#include <stdio.h>

class PlaneFigure {
public:
	virtual double getArea() const = 0;
	virtual double getPerimeter() const = 0;
};

#endif /* defined(__Labo_6__PlaneFigure__) */
