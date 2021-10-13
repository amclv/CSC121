//
//  Loops.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/12/21.
//
/*
 Three types of loops. "while", "do while", and "for"
 */

#include <stdio.h>
#include <iostream>

using namespace std;

//int main()
//{
//
//    // Print the values of CV 1 - 10.
//    // i is CONTROL variable
//    for(int i = 1; i <= 10; i++) // is a FIXED, PRE-TEST loop #1
//    { // Block of code
//        cout << "Value of i is: " << i << endl;
//    }
//    cout << endl; // Break in output
//
//    int j = 1; // #1
//    while (j <= 10) // Is a VARIABLE, PRE-TEST loop #2
//    {
//        cout << "Value of j is: " << j << endl;
//        j++; // #3
//    }
//    cout << endl; // Break in output
//
//    int k = 1; // #1
//    do // is VARIABLE, POST-TEST loop #3
//    {
//        cout << "Value of k is " << k << endl;
//        k++; // #3
//    } while (k <= 10); // Don't forget the semicolon after the while and its condition. #2
//    cout << endl; // Break in output
//
//    return 0;
//}
