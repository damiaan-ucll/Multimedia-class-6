//
//  B.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__B3__
#define __Labo_6__B3__

#include <stdio.h>
#include "A.h"

namespace exerciseThree {
	class B: public A{
		
	public:
		void identify() {
			std::cout << "I am B." << std::endl;
		}
	};
}

#endif /* defined(__Labo_6__B__) */
