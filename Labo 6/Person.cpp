//
//  Person.cpp
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Person.h"

Person::Person(std::string name, std::string lastname, Date birthday, bool isMale): birthday(birthday) {
	this->name = name;
	this->lastname = lastname;
	this->isMale = isMale;
}

std::ostream &operator << (std::ostream &stream, const Person &person) {
	return stream << person.lastname << " " << person.name << ": " << person.sex() << ", born on " << person.birthday;
}