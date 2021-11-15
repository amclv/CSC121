//
//  test2_code2.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/30/21.
//
/*
 The distance a vehicle travels can be calculated as follows:
 distance = speed * time
 
 For example, if the train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles.

 Write a program that asks the user for the speed of a vehicle (in miles per hour) and how many hours it has traveled. It should then use a loop to display the total distance traveled at the end of each hour of that time period.

 Here is an example of the output:
 What is the speed of the vehicle in mph? 40
 How many hours has it traveled? 3
 Hour       Miles Traveled

 --------------------------------
  1          40
  2          80
  3         120
 */

#include <stdio.h>
#include <iostream>

using namespace std;

void VehicleSpeed(int&);
void VehicleTravel(int&);

//int main()
//{
//    int speed;
//    int hours;
//    int distance;
//    
//    VehicleSpeed(speed);
//    VehicleTravel(hours);
//    
//    cout << "Hour\tMiles travelled\n";
//    cout << "-----------------------\n";
//    
//    for (int i = 1; i <= hours; i++)
//    {
//        distance = speed * i;
//        cout << i << "\t\t" << distance << "\n";
//    }
//}
//
//void VehicleSpeed(int& SPEED)
//{
//    cout << "What is the speed of the vehicle in MPG?: ";
//    cin >> SPEED;
//    
//    while (SPEED < 1)
//    {
//        cout << "Speed must be positive. Try again!: ";
//        cin >> SPEED;
//    }
//}
//
//void VehicleTravel(int& HOURS)
//{
//    cout << "How many hours did you travel?: ";
//    cin >> HOURS;
//    
//    while (HOURS < 1)
//    {
//        cout << "Woah! You need a travel time longer than 1 hour. Try again!: ";
//        cin >> HOURS;
//    }
//}
