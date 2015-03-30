//
//  Student.cpp
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Student.h"

Student::Student(std::string name, std::string lastname, Date birthday, bool isMale, unsigned short int number): Person(name, lastname, birthday, isMale) {
	this->number = number;
}

