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

int main(int argc, const char * argv[]) {
	// insert code here...
	
//	ex1();
	
//	ex2();
	
	ex3();
	
    return 0;
}