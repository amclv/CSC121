//
//  exercise1.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/18/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

const int DEFAULT_YEAR = 1582;

//int main()
//{
//    int year;
//
//    cout << "Please enter a year: ";
//    cin >> year;
//
//    /*
//     check if the year is before 1582 or after 1582.
//     if its less then 1582 then there is no rules its just divisible by 4
//     if its greater then 1582 then we check the exceptions.
//        its a leap year if its divisible by 4 or 400 but not for 100
//     */
//
//    if (year < DEFAULT_YEAR)
//    {
//        ((year % 4) == 0) ? cout << year << " is a leap year." : cout << year << " is not a leap year";
//    }
//    else
//    {
//        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//        {
//            cout << year << " is a leap year." << endl;
//        }
//        else
//        {
//            cout << year << " is not a leap year." << endl;
//        }
//    }
//
//    return 0;
//}
