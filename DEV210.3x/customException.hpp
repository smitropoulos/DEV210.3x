//
//  customException.hpp
//  DEV210.3x
//
//  Created by Stefanos Mitropoulos on 18/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#ifndef customException_hpp
#define customException_hpp

#include <stdio.h>
#include <exception>

class derivedException : public std::exception
{
public:
	virtual const char* what() const throw();
};


#endif /* customException_hpp */
