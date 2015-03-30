//
//  B.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__B2__
#define __Labo_6__B2__

#include <stdio.h>
#include "A.h"

namespace exerciseTwo {
	
	class B: public A { public:
		B(int a, int b):A(a){std::cout << "ctor␣B:␣" << b << std::endl;}
		~B(){std::cout << "dtor␣B" << std::endl;}
	};
	
}

#endif /* defined(__Labo_6__B__) */
