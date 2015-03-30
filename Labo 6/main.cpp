//
//  main.cpp
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include <iostream>
#include "Goo.h"
#include "exercise 2/C.h"
#include "exercise 3/D.h"
#include "Rect.h"

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
	Rect myRect = Rect(2,3);
	ex4(&myRect);
	
	// Exercise 5
	
	
    return 0;
}