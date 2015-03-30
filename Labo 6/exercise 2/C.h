//
//  C.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__C2__
#define __Labo_6__C2__

#include <stdio.h>
#include "B.h"

namespace exerciseTwo {
	
	class C: public B { public:
		C(int a, int b, int c) : B(a,b) {
			std::cout << "ctor C: " << c << std::endl;
		}
		~C(){std::cout << "dtor C" << std::endl;}
	};
	
}

#endif /* defined(__Labo_6__C__) */
