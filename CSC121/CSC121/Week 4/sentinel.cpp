//
//  sentinel.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/18/21.
//
/*
 Example for Sentinel / dummy values
 */

#include <stdio.h>
#include <iostream>

using namespace std;

//int main()
//{
//    /*
//    int num = 1;
//    char again;
//    
//    cout << "Please enter Y to continue this program "; // Prime read
//    cin >> again; // #1
//    
//    while ((again == 'Y') || (again == 'y')) // #2 // Possibly never executed
//    {
//        cout << "The value of number is " << num << endl;
//        num++;
//        
//        cout << "Do you want to print another number? "; // Change in CV #3
//        cin >> again;
//    }
//     */
//    
//    /*
//    char gain = 'Y';
//    int no = 1;
//    do // Always gets executed at least once.
//    {
//        cout << "The number is: " << no << endl;
//        no--;
//        
//        cout << "Do you want to print another number: ";
//        cin >> gain;
//    } while (gain == 'Y');
//     */
//    
//    
//    // Get the average of numbers entered through keyboard
//    
//    int smallest = 100;
//    int largest = 0;
//    int howmany;
//    int num;
//    int total = 0;
//    
//    cout << "How many number would you like to average?";
//    cin >> howmany;
//    
//    for (int i = 0; i < howmany; i++) // three statements in for, all in one line, PRE-TEST
//    {
//        cout << "Please enter the number: ";
//        cin >> num;
//        
//        total = total + num; // Continue to add the numbers accumlator 85, 100, 207
//        if (num < smallest) // true
//            smallest = num; // 85
//        
//        if (num > largest) // true
//            largest = num; // 85
//    } // 85, 25, 97
//    
//    
//    
//    cout << "The largest value is " << largest << endl;
//    cout << "The smallest value is " << smallest << endl;
//    cout << "The average value is " << (float(total) / float(howmany)) << endl;
//    
//    return 0;
//}
