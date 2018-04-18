//
//  customException.cpp
//  DEV210.3x
//
//  Created by Stefanos Mitropoulos on 18/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "customException.hpp"

using namespace std;


char const * derivedException::what() const throw()
{
	return "My derived exception";

}
