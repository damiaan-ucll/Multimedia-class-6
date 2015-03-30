//
//  D.h
//  Labo 6
//
//  Created by Damiaan Dufaux on 30/03/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_6__D3__
#define __Labo_6__D3__

#include <stdio.h>
#include "C.h"

namespace exerciseThree {
	class D: public C{
		
	public:
		virtual void identify(){
			std::cout << "I am D." << std::endl;
		}
	};
}

#endif /* defined(__Labo_6__D__) */
