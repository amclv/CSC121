//
//  funciton6.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/29/21.
//
// PASS BY REFERENCE

#include <stdio.h>
#include <iostream>

using namespace std;

/*
 This is a void function with two int params. The params are passed by ref so they go ino with one value and possibly come back with a diff value.
 Two nums will go in, and when the func is called the first param will comeback with the sum of the two nums and the second param will come back
 with the diff of the two nums
 */

void Calc(int&, int&); // int& means address of an int -> ref

//int main()
//{
//    
//    int Num1;
//    int Num2;
//
//    cout << "Please enter the first number: ";
//    cin >> Num1;
//
//    cout << "Please enter the second number: ";
//    cin >> Num2;
//
//    cout << Num1 << "\t" << Num2 << endl; // Before the call
//
//    Calc(Num1, Num2); // see: NO &
//
//    cout << "Here is the sum of the Numbers in Num1: " << Num1 << endl;
//    cout << "Here is the sum of the Numbers in Num2: " << Num2 << endl;
//
//    return 0;
//}
//
//void Calc(int& N1, int& N2) // We must have int& along with the FORMAL param name
//{
//    // Temp local vars
//    int sum;
//    int diff;
//
//    sum = N1 + N2;
//    diff = N1 - N2;
//
//    N1 = sum; // Ref param cvhanged inside the functions
//    N2 = diff;
//}
