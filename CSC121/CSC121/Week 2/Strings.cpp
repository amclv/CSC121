//
//  Strings.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/3/21.
//

/*
 String topics:
    String Input
    Reading strings that include space
    Reading a whole line as input
    String issues with input depending on which order the data is read
    Finding the length of a string
    Extacting sub string from a string
    Concatenation: Joining two or more strings into one
 */

#include <stdio.h>
#include <iostream>
#include <string> // pre-written header file

using namespace std;

//int main()
//{
//    int stdId = 0;
//    string name = ""; // Initializing with null string
//    double gpa = 0.0; // Declarations and initializations
//    
//    cout << "\nPlease enter the values for the following variables..." << endl; // Prompt User
//    cout << "Enter the ID: ";
//    cin >> stdId;
//    cin.ignore(); //
//    cout << "Enter the full name: ";
//    // cin >> name; // Can only read one word
//    getline(cin,name); // Use this for strings with more than one word
//    cout << "Enter the GPA: ";
//    cin >> gpa;
//    
//    cout << "\nHere are the values entered" << endl;
//    cout << "Student ID:\t" << stdId << endl;
//    cout << "Student name:\t" << name << endl;
//    cout << "Length of the student name is:\t" << name.length() << endl; // Lenght is a string function
//    cout << "Student GPA:\t" << gpa << endl << endl;
//    
//    string fname = name.substr(0, 5);
//    string lname = name.substr(5);
//    cout << "Student first name:\t\t\t" << fname << endl;
//    cout << "Student last name:\t\t\t" << lname << endl;
//    
////    cout << "My sister's name \t" << name.substr() << name.substr() << endl;
//    cout << "Using concatenation to get full name:\t" << fname + " " + lname << endl;
//    
//    //Swapping two values
//    string first{"one"};
//    string second{"two"};
//
//    //Output strings.
//    cout << "Before swap:\n first: " << first << "\n second: " << second << endl;
//    
//    first.swap(second); // Swap Strings
//    
//    cout << "\n\nAfter swap:\n first: " << first << "\n second: " << second << endl;
//    
//    first.swap(fname);
//    
//    cout << "\n\nAfter Swap:\n first: " << first << "\n fname: " << fname << endl;
//    
//    return 0;
//}
