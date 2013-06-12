//
//  Vector.h
//  Learning
//
//  Created by Rakesh Sehgal on 4/4/13.
//  Copyright (c) 2013 Rakesh Sehgal. All rights reserved.
//

#ifndef Learning_Vector_h
#define Learning_Vector_h

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Vector
{
private:
    int count;
    vector<int> values;
    
public:
    Vector();
    Vector(int count);
    
    int Count();
    bool Insert(int val);
    
    vector<int> Read();
    int Read(int elementPostion);
    
    void Sort(vector<int>::iterator begin, vector<int>::iterator end);
};

#endif
