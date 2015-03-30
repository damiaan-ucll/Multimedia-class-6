//
//  Person.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__Person__
#define __Labo_6__Person__

#include <stdio.h>
#include <string>
#include "Date.h"

class Person {
	
	std::string name;
	std::string lastname;
	Date birthday;
	bool isMale;
	
public:
	
	Person();
	Person(std::string name, std::string lastname, Date birthday, bool isMale);

	std::string sex() const { return isMale ? "male" : "female"; }
	
	 friend std::ostream &operator << (std::ostream &stream, const Person &person);
	
};

#endif /* defined(__Labo_6__Person__) */
