//
//  Goo.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__Goo__
#define __Labo_6__Goo__

#include <stdio.h>
#include "Foo.h"

class Goo: public Foo{
	public :
	int b;
	Goo(int a = 0, int b = 1) : Foo (a), b(b) {}
	int getB () const { return b; }
};

#endif /* defined(__Labo_6__Goo__) */
