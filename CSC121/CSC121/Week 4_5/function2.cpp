//
//  function2.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/21/21.
//
/*
 One way communication input only
 */

#include <stdio.h>
#include <iostream>

using namespace std;
/*
 This is void function with a single string parameter.
 */

void Header(string); // Function PROTOTYPE with a string parameter

int main()
{ // Arugment Actual Parameter -> #1 #2 #3
    
    Header("\nThis value is passed to the function\n"); // #1 Function call with literal value or const
    string title = "\nNow this value is passed to the function\n"; // title is ONLY variable in main Local
    
    cout << title << endl; // Printing value of title before function call.
    
    Header(title); // argument passed to the void function -- actual parameter #2 variable
    
    // #3 sample(x+3-7) INPUT VALUE CAN BE EXPRESSION
    Header(title.substr(7, 10)); // #4 FUNCTION CALL
    cout << title << endl; // PRINTING value of title after function call
    
//    cout << T << endl; // Trying to print T in main // This would never work as the value T is only being done from a function.
    
    return 0;
}

/*
 Function header must match the prototype,
 but includes the name of the parameter.
 This parameter is called FORMAL parameter
 */

void Header(string T) // Parameter FORMAL Parameter --> Variable
{
    cout << T << endl;
}
