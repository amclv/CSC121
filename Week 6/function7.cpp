//
//  function7.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/29/21.
//
// Overloaded Functions

#include <stdio.h>
#include <iostream>

using namespace std;

void Calc(int&, int&); // int& means address of an int

/*
 Over loaded functions are two or more functions with SAME name and DIFFERENT params, meaning different prototypes or signatures.
 */

void Calc(int&); // This is an OVERLOADED function

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
//    Calc(Num1, Num2); // see NO &
//    
//    cout << "Here is the sum of the Numbers in Num1: " << Num1 << endl;
//    cout << "Here is the diff of the Numbers in Num2: " << Num2 << endl;
//    
//    Num2 = 6;
//    
//    Calc(Num2);
//    
//    cout << "Here is the number multipied by itself: " << Num2 << endl;
//    
//    return 0;
//}
//
//void Calc(int& N1, int& N2) // We must have int& along with the FORMAL param name
//{
//    int sum;
//    int diff;
//    
//    diff = N1 - N2;
//    N1 = sum;
//    N2 = diff;
//}
//
//void Calc(int& p)
//{
//    p = p * p; // multiply value by itself.
//}
