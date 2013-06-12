//
//  DDerivedClass.h
//  Learning
//
//  Created by Rakesh Sehgal on 4/3/13.
//  Copyright (c) 2013 Rakesh Sehgal. All rights reserved.
//

#ifndef Learning_DDerivedClass_h
#define Learning_DDerivedClass_h

#include "DerivedVirtualClass.h"

class DDerivedClass : public DerivedVirtualClass
{
public:
    DDerivedClass();
    
    int Add(int x);
};

#endif
