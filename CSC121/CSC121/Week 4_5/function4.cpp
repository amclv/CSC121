//
//  function4.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/22/21.
//
/*
 TWO WAY COMMUNICATION
 */

#include <stdio.h>
#include <iostream>

using namespace std;

/*
 This is a value function with two integer parameters.
 This function returns an integer value which is the product of the two numbers
 that are passed as parameters.
 */
int Product(int, int);

int main()
{
    int n1;
    int n2;
    
    cout << "Please enter two integers: ";
    cin >> n1 >> n2;
    
    // n1 and n2 are ACTUAL parameters(arugments) VALUES --> constant/variables/expression/fn call
    cout << "The product of " << n1 << " and " << n2 << " is: " << Product(n1, n2) << endl;
    
    return 0;
}

// VAR = VALUE;
int Product(int n1, int n2)
{
    // int Product(int n1, int n2) // n1 and n2 are FORMAL parameters(parameters)VARIABLES
    
    return (n1 * n2);
}
