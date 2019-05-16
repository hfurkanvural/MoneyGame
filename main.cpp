//
//  BLG 252E Homework3
//  main.cpp
//  150140029
//
//  Created by H. Furkan Vural on 13.05.2018.
//  Copyright © 2018 H. Furkan Vural. All rights reserved.
//

#include <iostream>
#include "GenericArray.cpp"
#include "Money.cpp"

using namespace std;

int main()
{
    GenericArray<int> m1(5);
    GenericArray<double> m2(5);
    GenericArray<Money> m3(5);
    
    // Try for possible error
    try {
        Money d(-1,89);
    } catch (const char* error) {
        cout << error << endl;
    }
    
    // Try all other Money elements one by one
    try {
        Money a(10,5);
        m3.elements[0] = a;
        
    } catch (const char* error) {
        cout << error << endl;
    }
    
    try {
        Money b(10,5);
        m3.elements[1] = b;
    } catch (const char* error) {
        cout << error << endl;
    }
    
    try {
        Money c(43,7);
        m3.elements[2] = c;
    } catch (const char* error) {
        cout << error << endl;
    }
    
    try {
        Money k(50,6);
        m3.elements[3] = k;
    } catch (const char* error) {
        cout << error << endl;
    }
    
    try {
        Money m(10,20);
        m3.elements[4] = m;
    } catch (const char* error) {
        cout << error << endl;
    }
    
    try {
        Money bonus(5,0);
        
    } catch (const char* error) {
        cout << error << endl;
    }
    
    // Inserting array of doubles
    m2.elements[0] = 12.5;
    m2.elements[1] = 11.6;
    m2.elements[2] = 13.9;
    m2.elements[3] = 23.7;
    m2.elements[4] = 130.7;

    // Inserting array of integers
    m1.elements[0] = 1;
    m1.elements[1] = 2;
    m1.elements[2] = 5;
    m1.elements[3] = 9;
    m1.elements[4] = 90;
    
    
    // Assigning sums of arrays to total arguments
    m3.total=m3.sum();
    m2.total=m2.sum();
    m1.total=m1.sum();

    
    if (m3.win_bonus == true)    //checking if won bonus
    {
        //Converting double arguments to integer so we can reach lira and kurus part of money seperately
        cout << "Your total amount for money objects array   " << (int)m3.total - 5 << " lira : " << (m3.total-(int)m3.total) * 100 << " kurus" << endl;
        cout << "You have won 5 tl bonus, your new amount is " << (int)m3.total << " lira : " << (m3.total-(int)m3.total) * 100 << " kurus" << endl << endl;
    }
    else
    {
        cout << "Your total amount for money objects array   " << (int)m3.total + 5 << " lira : " << (m3.total-(int)m3.total) * 100 << " kurus" << endl;
        cout << "You have got 5 tl punishment, your new amount is " << (int)m3.total + 5 << " lira : " << (m3.total-(int)m3.total) * 100 << " kurus" << endl << endl;
    }
    
    if (m1.win_bonus == true)   //checking if won bonus
    {
        cout << "The total of integer array is " << m1.total - 5 << endl;
        cout << "you have won 5 points bonus new total is  " << m1.total << endl << endl;
    }
    else
    {
        cout << "The total of integer array is " << m1.total + 5 << endl;
        cout << "you have got 5 points punishment new total is  " << m1.total << endl << endl;
    }
    
    if (m2.win_bonus == true)   //checking if won bonus
    {
        cout << "The total of double array is " << m2.total - 5 << endl;
        cout << "you have won 5 points bonus new total is  " << m2.total << endl << endl;
    }
    else
    {
        cout << "The total of double array is " << m2.total + 5 << endl;
        cout << "you have got 5 points punishment new total is  " << m2.total << endl << endl;
    }
    
} 
