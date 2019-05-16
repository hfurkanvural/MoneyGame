//
//  BLG 252E Homework3
//  GenericArray.h
//  150140029
//
//  Created by H. Furkan Vural on 13.05.2018.
//  Copyright © 2018 H. Furkan Vural. All rights reserved.
//

#ifndef GenericArray_h
#define GenericArray_h

#include <stdio.h>
#include "Money.h"
using namespace std;

template <class T>
class GenericArray
{
public:
    T *elements; // template array
    int size;
    double total;
    bool win_bonus;
    
    double sum();
    
    GenericArray();
    GenericArray(int);
    ~GenericArray();
    
    
};


#endif /* GenericArray_h */

