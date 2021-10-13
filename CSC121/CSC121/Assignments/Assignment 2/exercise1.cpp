//
//  exercise1.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/12/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int num_one;
    int num_two;
    
    cout << "Please enter a numeric value: \n";
    cin >> num_one;
    
    cout << "Please enter a numeric value: \n";
    cin >> num_two;
    
    if (num_one > num_two)
        cout << "The smallest value is " << num_two << endl;
    else if (num_one < num_two)
        cout << "The smallest value is " << num_one << endl;
    else
        cout << "They are equal" << endl;
    
    return 0;
}
