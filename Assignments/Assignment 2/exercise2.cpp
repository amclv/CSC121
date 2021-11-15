//
//  exercise2.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/12/21.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

const double FIVE_SHIPPING = 5.00;
const double EIGHT_SHIPPING = 8.00;
const double TEN_SHIPPING = 10.00;
const double FIFTEEN_SHIPPING = 15.00;
const double TWENTY_SHIPPING = 20.00;

//int main()
//{
//    // Declares a purchase amount and prompts a user to input it.
//    double purchase_amount;
//    cout << "Enter a purchase amount to find out your shipping charges!\n";
//    cout << "Please enter the amount of your purchase: ";
//    cin >> purchase_amount;
//    
//    // If else statement to check the user input and prints out the set shipping charge constants listed above.
//    cout << fixed << setprecision(2);
//    if ((purchase_amount >= 0.00) && purchase_amount <= 250.00)
//        cout << "The shipping charge on a purchase of $" << purchase_amount << " is $" << FIVE_SHIPPING << setw(8) << endl;
//    else if ((purchase_amount > 250.01) && purchase_amount < 500.00)
//        cout << "The shipping charge on a purchase of $" << purchase_amount << " is $" << EIGHT_SHIPPING << setw(8) << endl;
//    else if ((purchase_amount > 500.01) && purchase_amount < 1000.00)
//        cout << "The shipping charge on a purchase of $" << purchase_amount << " is $" << TEN_SHIPPING << setw(8) << endl;
//    else if ((purchase_amount > 1000.01) && purchase_amount <= 5000.00)
//        cout << "The shipping charge on a purchase of $" << purchase_amount << " is $" << FIFTEEN_SHIPPING << setw(8) << endl;
//    else if ((purchase_amount > 5000.00))
//        cout << "The shipping charge on a purchase of $" << purchase_amount << " is $" << TWENTY_SHIPPING << setw(8) << endl;
//    else // This is an out statement that shows if a user enters a negative number.
//        cout << "Error calculating shipping charge please try again." << endl;
//    
//    return 0;
//}
