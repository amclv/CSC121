//
//  exercise2.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/18/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

//int main()
//{
//    int number; // Users input
//    int digitValues[] = { 1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000 }; // This is an integer array that uses all of our digit values
//    string symbolValues[] = { "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M" }; // This is a string array that uses all of our roman symbols
//    string result;
//    
//    cout << "Enter the whole number less than 4,000 you wish to convert: ";
//    cin >> number;
//    
//    for (int i = 12; i >= 0; --i) // A loop to check if the number that is inputed is greater than the constant
//    {
//        if (number >= digitValues[i])
//        {
//            int divide = number / digitValues[i]; // Finding the number of times the number that we ask gets divided by the constant
//            
//            for (int x = 0; x < divide; x++)
//            {
//                result += symbolValues[i]; // Loops through and appends the roman digits to the result string above.
//            }
//            number = number % digitValues[i]; // Finds the remaining numbers
//        }
//    }
//    cout << "The Roman nummeral is " << result << endl; // Prints the answer out to the user.
//    
//    
//    return 0;
//}
