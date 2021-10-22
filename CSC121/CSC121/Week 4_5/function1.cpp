//
//  function1.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/21/21.
//
/*
 No communication just action. Function will do something.
 Code written to perform a single task in a specific format is called a FUNCTION
 */

#include <stdio.h>
#include <iostream>

using namespace std;

void Header(); // Function prototype/signature

// Flow of execution
//int main() // Entry into the program
//{
//    Header(); // void function can be called on a line by itself. CALL.invocation
//    return 0;
//}

// This is a void function with no parameters.
// This function does something inside the function body.
// Function Definition
void Header() // Function header must match the prototype
{ // Function body
    cout << "\nFunction that does something \n" << endl;
}
