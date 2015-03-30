//
//  Date.cpp
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Date.h"

Date::Date(unsigned short int day, unsigned short int month, unsigned short int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

std::ostream &operator << (std::ostream &stream, const Date &date) {
	return stream << date.day << "/" << date.month << "/" << date.year;
}