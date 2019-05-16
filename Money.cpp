//
//  BLG 252E Homework3
//  Money.cpp
//  150140029
//
//  Created by H. Furkan Vural on 13.05.2018.
//  Copyright © 2018 H. Furkan Vural. All rights reserved.
//

#include "Money.h"

Money::Money() // Default Constructor
{
    lira=0;
    kurus=0;
}

Money::Money(int l, int k) // Constructor with arguments
{
    lira=l;
    kurus=k;
    
    if (lira<0 || kurus <0) { // Condition to check error type
        throw "The amount of money can not be below zero!"; // Catched error and throwed
    }
    
    
}

Money::~Money() // Destructor
{
    
}


double Money::operator+(double num) // Overloaded + operator, returns double
{
    double extralira=0, newlira=0, newkurus=kurus % 100;
    if (kurus >= 100) // Checking, 100 kurus = 1 lira
    {
        extralira = kurus / 100; // if it is, finding extra liras from kurus'
    }
    
    newlira = lira + num + extralira + (newkurus / 100); // Sum of total, elements arguments, extra liras and kurus' as 0.kk

    
    return newlira; // returns double so we can make it equal to total
}

