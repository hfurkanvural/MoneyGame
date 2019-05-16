//
//  BLG 252E Homework3
//  Money.h
//  150140029
//
//  Created by H. Furkan Vural on 13.05.2018.
//  Copyright © 2018 H. Furkan Vural. All rights reserved.
//

#ifndef Money_h
#define Money_h

#include <iostream>
using namespace std;

class Money
{
private:
    int lira;
    int kurus;
    
public:
    Money();
    Money(int,int);
    ~Money();
    
    double operator+(double);
};

#endif /* Money_h */
