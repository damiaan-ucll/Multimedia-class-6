//
//  main.cpp
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include <iostream>
#include "Goo.h" // Exercise 1
#include "exercise 2/C.h" // Exercise 2
#include "exercise 3/D.h" // Exercise 3
#include "Rect.h" // Exercise 4
#include "Student.h" // Exercise 5


using namespace std;

void ex1() {
	Foo f (3);
	Goo g (5);
	cout << f. getA () << endl ;
	cout << g. getA () << endl ;
	cout << g. getB () << endl ;
}

void ex2() {
	exerciseTwo::C cClass (1 ,2 ,3);
}

void ex3() {
	exerciseThree::C c;
	exerciseThree::B &b = c;
	b.identify();
}

void ex4(PlaneFigure *figure) {
	cout << figure->getArea() << endl;
	cout << figure->getPerimeter() << endl;
}

int main(int argc, const char * argv[]) {
	
	// Exercise 1
	cout << "Exercise 1:\n";
	ex1();
	
	// Exercise 2
	cout << "\n\nExercise 2:\n";
	ex2();
	
	// Exercise 3
	cout << "\n\nExercise 3:\n";
	ex3();
	
	// Exercise 4
	cout << "\n\nExercise 4:\n";
	Rect myRect(2,3);
	ex4(&myRect);
	
	// Exercise 5
	cout << "\n\nExercise 4:\n";
	Date d(1,2,2000);
	cout << d << endl;
	
	Person p("Filip", "Wallaert", d, true);
	cout << p << endl;
	const Person p2("Eva", "Beyens", Date(21,8, 1995), false);
	cout << p2 << endl;
	
	Person *p3 = new Student("Karen", "Verbinnen", Date(13, 5, 1985), false, 1234);
	cout << *p3 << endl;
	return 0;
	
    return 0;
}