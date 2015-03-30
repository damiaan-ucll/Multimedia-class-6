//
//  Student.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__Student__
#define __Labo_6__Student__

#include <stdio.h>
#include "Person.h"

class Student: public Person {
	
	unsigned short int number;
	
public:
	
	Student(std::string name, std::string lastname, Date birthday, bool isMale, unsigned short int number);
	
};

#endif /* defined(__Labo_6__Student__) */
