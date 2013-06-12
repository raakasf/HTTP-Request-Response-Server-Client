//
//  VirtualClass.h
//  Learning
//
//  Created by Rakesh Sehgal on 4/3/13.
//  Copyright (c) 2013 Rakesh Sehgal. All rights reserved.
//

#ifndef Learning_VirtualClass_h
#define Learning_VirtualClass_h

class VirtualClass
{
public:
    VirtualClass();
    
    virtual int Add(int x) = 0;
};

#endif
