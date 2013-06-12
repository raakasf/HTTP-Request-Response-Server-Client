//
//  main.cpp
//  Learning
//
//  Created by Rakesh Sehgal on 4/3/13.
//  Copyright (c) 2013 Rakesh Sehgal. All rights reserved.
//

#include <iostream>
#include <algorithm>

#include "ConstructorClass.h"
#include "DerivedVirtualClass.h"
#include "DDerivedClass.h"
#include "Vector.h"

int main(int argc, const char * argv[]){
    int choice = 1;
    
    switch (choice) {
        case 2:
        {
        }
            break;
            
        //VECTORS
        case 1:
        {
            bool result = false;
            Vector* vecObj = new Vector();
            result = vecObj->Insert(20);
            result = vecObj->Insert(10);
            result = vecObj->Insert(30);
            int val = vecObj->Read(2);
            
            cout << "\nValue at position 2 is: " << val;
            
            vector<int> vecVal = vecObj->Read();
            
            cout << "\nElements in vector are:";
            
            for(int i = 0; i < vecVal.size(); i++)
            {
                cout << " " << vecVal[i];
            }

            vector<int>::iterator j = vecVal.begin();
            cout << "\nUsing iterator: " << *j << " " << *(++j) << " " << *(++j);
            
            vecObj->Sort(vecVal.begin(), vecVal.end());
            j = vecVal.begin();
            cout << "\nAfter sorting: " << *j << " " << *(++j) << " " << *(++j);
        }
            break;

        //VIRTUAL CLASSES
        case 0:
        {
            //    VirtualClass* virObj = new VirtualClass();
            //    virObj->Add(1);
            
            DerivedVirtualClass* derObj = new DerivedVirtualClass();
            derObj->Add(10);
            
            DDerivedClass* ddObj = new DDerivedClass();
            
            derObj = ddObj;
            derObj->Add(1);
            
            ConstructorClass* constObj = new ConstructorClass();
            constObj->Add(10, 11);
        }
            break;
            
        default:
        {
            choice = 9999;
        }
            break;
    }

    
    return 0;
}

