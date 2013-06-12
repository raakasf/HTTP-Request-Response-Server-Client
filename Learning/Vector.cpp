//
//  Vector.cpp
//  Learning
//
//  Created by Rakesh Sehgal on 4/4/13.
//  Copyright (c) 2013 Rakesh Sehgal. All rights reserved.
//

#include "Vector.h"

Vector::Vector()
{
    count = 0;
}

Vector::Vector(int count)
{
    values.resize(count);
}

int Vector::Count()
{
    return count;
}


bool Vector::Insert(int val)
{
    bool valueAdded = false;
    
    //int temp = values.begin();
    values.insert(values.begin() + count, val);
//    values.push_back(val);
//    values[count] = val;
    valueAdded = true;
    count++;
    
    return valueAdded;
}

int Vector::Read(int elePos)
{
    return values[elePos];
}

vector<int> Vector::Read()
{
    return values;
}

void Vector::Sort(vector<int>::iterator begin, vector<int>::iterator end)
{
    sort(begin, end);
}