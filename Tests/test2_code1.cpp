//
//  test2_code1.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/30/21.
//
/*
 Write a program that reads a number and prints all of its binary digits: Print the remainder number % 2, then replace the number with number / 2. Keep going until the number is 0. For example, if the user provides the input 13, the output should be
 1
 0
 1
 1
 (13  is 1101 in binary)

 Let the program continue to run and generate binary numbers until the user wants to stop.
 */

#include <stdio.h>
#include <iostream>

using namespace std;

//void BinaryConverter(int&);
//
//int main()
//{
//    int num;
//    char userResponse;
//    
//    cout << "Would you like to convert a number to binary? (Y/N): ";
//    cin >> userResponse;
//    
//    while ((userResponse == 'Y') || (userResponse == 'y'))
//    {
//        BinaryConverter(num);
//        
//        cout << "\n Would you like to check a new number? (Y/N)";
//        cin >> userResponse;
//    }
//    
//    return 0;
//}
//
//void BinaryConverter(int& NUM)
//{
//    cout << "Enter a positive number: ";
//    cin >> NUM;
//    
//    while (NUM <= 0) {
//        cout << "Invalid! Please enter a new number: ";
//        cin >> NUM;
//    }
//    
//    while (NUM > 0) {
//        cout << NUM % 2 << " ";
//        NUM /= 2;
//    }
//}
