//
//  exercise3.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/12/21.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//int main()
//{
//    string letterGrade;
//    string outputString = "The equivalent number grade is ";
//    double resultValue;
//
//    double aGrade = 4.0; // A+ || A, A- 3.7
//    double bGrade = 3.0; // B, B+ 3.3, B- 2.7
//    double cGrade = 2.0; // C, C+ 2.3, C- 1.7
//    double dGrade = 1.0; // D, C+ 1.3, D- 0.7
//    int fGrade = 0;      // F
//
//    // Prompt user and get input.
//    cout << "Enter your letter grade: ";
//    cin >> letterGrade;
//
//    cout << fixed << setprecision(1);
//    if (letterGrade[0] == 'A')
//    {
//        ((letterGrade[1]) == '-') ? resultValue = aGrade - 0.3 : resultValue = aGrade;
//    }
//    else if (letterGrade[0] == 'B')
//    {
//        ((letterGrade[1]) == '+') ? resultValue = bGrade + 0.3 : (letterGrade[1] == '-') ? resultValue = bGrade - 0.3 : resultValue = bGrade;
//    }
//    else if (letterGrade[0] == 'C')
//    {
//        ((letterGrade[1]) == '+') ? resultValue = cGrade + 0.3 : (letterGrade[1] == '-') ? resultValue = cGrade - 0.3 : resultValue = cGrade;
//    }
//    else if (letterGrade[0] == 'D')
//    {
//        ((letterGrade[1]) == '+') ? resultValue = dGrade + 0.3 : (letterGrade[1] == '-') ? resultValue = dGrade - 0.3 : resultValue = dGrade;
//    }
//    else
//    {
//        resultValue = fGrade;
//    }
//
//    cout << outputString << resultValue << endl;
//    return 0;
//}
