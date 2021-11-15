//
//  function8.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/29/21.
//
// NESTED FUNCTION CALLS

#include <stdio.h>
#include <iostream>

using namespace std;

void Calc(int&, int&);
void Calc(int&);

int add(int, int);
int subtract(int, int);

//int main()
//{
//    int Num1;
//    int Num2;
//    
//    cout << "Please enter the first number: ";
//    cin >> Num1;
//    
//    cout << "Please enter the second number: ";
//    cin >> Num2;
//    
//    Calc(Num1, Num2);
//    
//    cout << "Here is the sum of the Numbers in Num1: " << Num1 << endl;
//    cout << "Here is the difference of the Numbers in Num2: " << Num2 << endl;
//    
//    Calc(Num2);
//    
//    cout << "Here is the number multiplied by itself: " << Num2 << endl;
//    
//    return 0;
//}
//
//void Calc(int& N1, int& N2)
//{
//    int sum;
//    int diff;
//    
//    sum = add(N1, N2);
//    diff = subtract(N1, N2);
//    
//    N1 = sum;
//    N2 = diff;
//}
//
//void Calc(int& p)
//{
//    p = p * p;
//}
//
//int add(int n1, int n2)
//{
//    return (n1 + n1);
//}
//
//int subtract(int n1, int n2)
//{
//    return (n1 - n1);
//}

