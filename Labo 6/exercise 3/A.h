//
//  A.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__A3__
#define __Labo_6__A3__

#include <stdio.h>
#include <iostream>

namespace exerciseThree {
	class A{
		
	public:
		virtual void identify() {
			std::cout << "I am A." << std::endl;
		}
		
	};
}

#endif /* defined(__Labo_6__A__) */
