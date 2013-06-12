//
//  DerivedVirtualClass.h
//  Learning
//
//  Created by Rakesh Sehgal on 4/3/13.
//  Copyright (c) 2013 Rakesh Sehgal. All rights reserved.
//

#ifndef Learning_DerivedVirtualClass_h
#define Learning_DerivedVirtualClass_h

#include "VirtualClass.h"

class DerivedVirtualClass : public VirtualClass
{
public:
    DerivedVirtualClass();
    
    virtual int Add(int);
};

#endif
