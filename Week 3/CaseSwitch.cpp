//
//  CaseSwitch.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/11/21.
//
/*
 Case Switch Statement using all previous sleections as menu items.
 Fall through property of the case switch statement
 ASCII character has a numeric code (integer) A --> 65
 */

#include <stdio.h>
#include <iostream>

using namespace std;

//int main()
//{
//    int score = 0; // Declare an integer variable
//    cout << "\nPlease enter a value for score: ";
//    cin >> score; // Get the score
//    cout << "\n Here is the value you entered " << score << endl; //
//
//    // Prepare the code for menu
//    cout << "\n What would you like to do with this score? : \n";
//    cout << "1. Perfect Score Check \n";
//    cout << "2. Even/Odd Check \n";
//    cout << "3. Letter Grade Check \n";
//    cout << "4. Conditional operator used for Even/Odd Check \n";
//    cout << "9. Quit\n";
//
//    int menu = 0;
//    cin >> menu; // Get the menu item
//
//    // Code the case switch statement to respond to the menu
//    switch (menu)
//    {
//        case 1: // Perfect Score
//        {
//            if (score == 100)
//            {
//                cout << "\nPerfect Score!\n";
//                cout << "Bravo! Great!\n";
//            } // End of if
//            break;
//        } // End of case 1
//        case 2: // Even/Odd Check
//        {
//            if ((score % 2) == 0)
//                cout << "\n Score is Even!\n"; // True
//            else
//                cout << "\n Score is Odd!\n"; // False
//            break;
//        } // End of case 2
//        case 3:
//        {
//            if (score >= 90) // A
//                cout << "\n Letter Grade is A\n";
//            else if (score >= 80) // B
//                cout << "\n Letter Grade is B\n";
//            else if (score >= 70) // C
//                cout << "\n Letter Grade is C\n";
//            else if (score >= 60) // D
//                cout << "\n Letter Grade is D\n";
//            else // F
//                cout << "\n Letter Grade is F, please try harder!\n";
//            break;
//        } // End of case 3
//        case 4: // Conditional operator is short for of if then else
//        { // syntax is ? true part : false part
//            ((score % 2) == 0)? cout << "\n Score is Even!\n" : cout << "\n Score is Odd!\n";
//            break;
//        } // End of case 4
//        case 9:
//        {
//            cout << endl;
//        } // End of case 9
//    } // End of Switch
//    return 0;
//}
