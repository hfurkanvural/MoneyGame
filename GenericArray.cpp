//
//  BLG 252E Homework3
//  GenericArray.cpp
//  150140029
//
//  Created by H. Furkan Vural on 13.05.2018.
//  Copyright © 2018 H. Furkan Vural. All rights reserved.
//

#include "GenericArray.h"

template <class T>
GenericArray<T>::GenericArray() //Default Constructor
{
    size = 0;
    total = 0;
    win_bonus = false;
    
}

template <class T>
GenericArray<T>::GenericArray(int s) // Constructor
{
    size = s;
    elements = new T [size];
    total = 0;
    win_bonus = false;
}

template <class T>
GenericArray<T>::~GenericArray() // Destructor
{
    if (size != 0)
        delete [] elements;
}

template <class T>
double GenericArray<T>::sum() //Addition function for all type of arguments, returns double
{
    int i;
    for (i=0; i<size; i++) { // Sum loop for all arguments
        total = elements[i] + total;
    }
    
    if ( total > 100) // bonus check condition
    {
        total = total + 5; // won bonus
        win_bonus = true;
    }
    else
    {
        total = total - 5; // penalty
        win_bonus = false;
    }
    
    return total;
}
