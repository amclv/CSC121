//
//  exercise1.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/4/21.
//
/*
 Exercise#1 (20 Points)
 Write a program that calculates and displays the take-home pay for a commissioned sales employee along with all of the deductions.
 Input: Prompt the user for the weekly sales.
 Process: Perform the calculations. The employee receives 8% of his or her total sales as his or her gross pay. His or her federal tax rate is 16%. He or she contributes 8% to his or her retirement program and 6% to Social Security.
 Output: Display the results
 Sample Output:
 Enter Weekly Sales:
 Total Sales:
 Gross pay (8%):
 Federal tax paid:
 Social security paid: Retirement contribution:
 Total deductions: Take home pay:
 Pseudo Code:
 32000 32000.00
 2560.00 409.60 153.60 204.80
 768.00 1792.00
 1. 2. 3.
 Declare variables
 Accept Input - weeklySales
 Calculate Gross Pay = Weekly Sales * .08
 Assignment 1
 Prof. Fatima
 4. Calculate Federal Tax = Gross Pay * .16
 5. Calculate Social Security = Gross Pay * .06
 6. Calculate Retirement = Gross Pay * .08
 7. Calculate Total Deductions = Federal Tax + Social Security + Retirement
 8. Calculate Total Take Home Pay = Gross Pay - Total Deductions
 9. Display the following on separate lines and format variables with $ and decimal.
 a. Total Sales Amount:
 b. Gross Pay (.08):
 c. Federal Tax paid (.16):
 d. Social Security paid (.06): value of social security
 e. Retirement contribution (.08): value of retirement
 f. Total Deductions: value of total deductions
 g. Take Home Pay: value of take home pay
 Note: Use Set Precision (2) to format the output. The statements should look something like the following:
 //include the iomanip header file at the top of the file #include <iomanip>
 //use fixed and setprecision(2) to format the number //use setw(8) to control the width of the field
 //use \t to control the spacing between fields
 cout << fixed << setprecision(2);
 cout << "Gross Pay (0.08):\t $" << setw(8) << grossPay << endl;
 */

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 Fixed constants that are not going to change
 though this would be better to be in a variable state just incase it flexes a bit.
 but it would be more in a UI that a person can change themselves.
 */
const double GROSS_PAY = 8.0;
const double TAX_RATE = 16.0;
const double RETIREMENT = 8.0;
const double SOCIAL_SECURITY = 6.0;

int main()
{

    /*
     Created variables that are in double (As double is more precise in numbering)
     */
    double weeklySales;
    double totalDeductions;
    double totalGrossPay;
    double totalTaxRate;
    double totalSocialSecurity;
    double totalRetirement;
    double totalTakeHome;

    // Prompts user to enter the sales and takes in input from the user.
    cout << "Hello! Please enter in the weekly sales: " << endl;
    cin >> weeklySales;

    // Grab the gross pay first.
    totalGrossPay = weeklySales * (GROSS_PAY / 100);
    
    // Calculate the rest of the deductions based on the gross pay from above
    totalTaxRate = totalGrossPay * (TAX_RATE / 100);
    totalSocialSecurity = totalGrossPay * (SOCIAL_SECURITY / 100);
    totalRetirement = totalGrossPay * (RETIREMENT / 100);

    // Add all three deductions
    totalDeductions = totalTaxRate + totalSocialSecurity + totalRetirement;
    
    // Subtract all deductions from gross pay.
    totalTakeHome = totalGrossPay - totalDeductions;
    
    // OUTPUT.
    cout << fixed << setprecision(2);
    cout << "Weekly Sales:\t\t\t $ " << setw(8) << weeklySales << endl;
    cout << "Gross (0.08):\t\t\t $ " << setw(8) << totalGrossPay << endl;
    cout << "Tax (0.16):\t\t\t\t $ " << setw(8) << totalTaxRate << endl;
    cout << "Retirement (0.08):\t\t $ " << setw(8) << totalRetirement << endl;
    cout << "Social Security (0.06):\t $ " << setw(8) << totalSocialSecurity << endl;
    cout << "Total Deduction:\t\t $ " << setw(8) << totalDeductions << endl;
    cout << "Total Pay:\t\t\t\t $ " << setw(8) << totalTakeHome << endl;
    return 0;
}
