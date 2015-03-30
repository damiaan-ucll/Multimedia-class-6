//
//  A.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__A2__
#define __Labo_6__A2__

#include <stdio.h>
#include <iostream>

namespace exerciseTwo {
	class A {
	public:
		A(int a){std::cout << "ctor A: " << a << std::endl;}
		~A(){std::cout << "dtor A" << std::endl;}
	};
}

#endif /* defined(__Labo_6__A__) */
