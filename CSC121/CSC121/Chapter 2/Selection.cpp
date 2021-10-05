//
//  Selection.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/3/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int score; // Declare an integer variable
    cout << "Please enter a value for score: "; // Prompt the user
    cin >> score; // Get input from keyboard
    cout << "Here is the value you entered for score: " << score << endl; // Echoing
    
    /*
     Simple if statement #1
     Testing for perfect score ==> Problem
     Keyword if followed by condition(TEST) of equality followed by the block
     of code to be executed when the test returns true. Always put the test in parentheses
     equality operator is ==. DO NO CONFUSE WITH = (assigmnet operator)
     */
    if (score == 100)
    { // Block of code // Single pathway we take if condition is true.
        cout << "Score is perfect!" << endl;
        cout << "Bravo!" << endl;
    } // Curly braces are needed when the if statement has more than one line of code
    
    /*
     if then else statement has 2 pathways, one for true and one for false.
     Check to see if the score entered is even or odd --> Problem.
     */
    if ((score % 2) == 0) // % is the modulus operator that returns the remainder.
    { // gives the remainder to be compared to 0
        cout << "\n Score is even!\n\n"; // TRUE Body
    }
    else
    { // what follows else is false body
        cout << "\n Score is odd!\n\n";
    }
    
    /*
     if then else if statement, multiple pathways
     Print the letter grade for the given score --> Problem.
     */
    if (score > 89) // (score >= 90)
        cout << "Letter Grade is A" << endl;
    else if (score >= 80) // (score > 79)
        cout << "Letter Grade is B" << endl;
    else if (score >= 70)
        cout << "Letter Grade is C" << endl;
    else if (score >= 60)
        cout << "Letter Grade is D" << endl;
    else // This is called default else // Catch-All
        cout << "Letter Grade is F" << endl;
    
    return 0;
}
