//
//  C.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__C3__
#define __Labo_6__C3__

#include <stdio.h>
#include "B.h"

namespace exerciseThree {
	class C: public B{
		
	public:
		virtual void identify(){
			std::cout << "I am C." << std::endl;
		}
	};
}

#endif /* defined(__Labo_6__C__) */
