//
//  Foo.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__Foo__
#define __Labo_6__Foo__

#include <stdio.h>

class Foo {

	public :
	
	int a;
	Foo(int a = 0) : a(a) {}
	int getA() const { return a;}
};

#endif /* defined(__Labo_6__Foo__) */
