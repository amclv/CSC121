//
//  exercise2.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/4/21.
//
/*
 Exercise#2 (20 Points)
 Write a program that reads in an integer and breaks it into a sequence of individual digits. For example, the input 16384 is displayed as
 1 6 3 8 4
 Make sure the input has no more than five characters and is not negative. (You don’t have to do this through code) Just make sure you enter correct data when running the program.
 Sample Output:
 Enter an integer: 16384
 The digits extracted from integer 16384 are: 1 6 3 8 4
 */

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

//int main()
//{
//    // Variable int
//    int number;
//
//    // Prompt and accept input from user.
//    cout << "Enter a five-digit number: ";
//    cin >> number;
//
//    // Print each number with a space // 12345
//    
//    cout << number / 10000 << " "; // 2345
//    number = number % 10000;
//
//    cout << number / 1000 << " "; // 345
//    number = number % 1000;
//
//    cout << number / 100 << " "; // 45
//    number = number % 100;
//
//    cout << number / 10 << " "; // 5
//    number = number % 10;
//
//    cout << number << endl; // 1 2 3 4 5
//    return 0;
//}
