//
//  exercise3.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/4/21.
//
/*
 Exercise#3 (20 Points)
 Write a program that reads two times in military format (0900, 1730) and prints the number of hours and minutes between the two times. Make sure the result is positive. Use arithmetic operators to accomplish everything such as the fact that there are 60 minutes and 24 hours.
 Sample Output 1:
 Please enter the first time: 0900 Please enter the second time: 1730
 8 hours 30 minutes
 Sample Output 2:
 Please enter the first time: 1730 Please enter the second time: 0900
 8 hours 30 minutes
 */

#include <stdio.h>
#include <iostream>

using namespace std;

const int MINS_PER_DAY = 1440; // How many minutes are in a day (i.e 60 min times 24 hours)

int main()
{
    int first, second; // Initialize first and second as an int.
    
    // Prompt the user and ask for input for first and second times.
    cout << "Please enter the first time: " << endl;
    cin >> first;
    
    cout << "Please enter the second time: " << endl;
    cin >> second;
    
    // Convert both to minutes
    first = (first / 100) * 60 + first % 100;
    second = (second / 100) * 60 + second % 100;
    
    // Working time difference in minutes.
    int minutes = (second + MINS_PER_DAY - first) % MINS_PER_DAY;
    
    // Turn minutes into hours and and minutes into minutes and output the answer.
    int hours = minutes / 60;
    minutes = minutes % 60;
    cout << hours << " hours " << minutes << " minutes" << endl;
    
    return 0;
}
