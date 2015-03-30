//
//  Date.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__Date__
#define __Labo_6__Date__

#include <stdio.h>
#include <iostream>

class Date {
	
	unsigned short int day;
	unsigned short int month;
	  signed short int year;
	
public:
	
	Date(unsigned short int day, unsigned short int month, unsigned short int year);
	
	friend std::ostream &operator << (std::ostream &stream, const Date &date);
	
};

#endif /* defined(__Labo_6__Date__) */