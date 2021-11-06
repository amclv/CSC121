#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

char WelcomeIntro();
string InputDiverName();
string InputDiverCity();
double CheckDegreeOfDifficulty();
void EventSummary(double, int);
void DisplayDiverInformation(string, string, double);

//int main()
//{
//    int allDivers = 0;
//    double avgScoreAllDivers = 0;
//    double overallScore = 0;
//
//    char input = WelcomeIntro();
//
//    cout << fixed << setprecision(2);
//    while ((input == 'Y') || (input == 'y'))
//    {
//        string name = InputDiverName();
//        string city = InputDiverCity();
//
//        double highScore = 0.0;
//        double lowScore = 10.0;
//        double totalScore = 0.0;
//        double difficulty;
//        double diverTotal;
//
//        int judgeCount = 1;
//        cout << "\n\t\t\tPlease enter between 0 - 10 for score!\n\n";
//
//        do {
//            double inputScore;
//            cout << "\t\t\tEnter the score given by Judge #" << judgeCount << ": ";
//            cin >> inputScore;
//
//            while ((inputScore < 0) || (inputScore > 10))
//            {
//                cout << "Invalid score - Please re-enter between 0 - 10" << endl;
//                cout << "Enter the score given by Judge #" << judgeCount << ": ";
//                cin >> inputScore;
//            }
//
//            highScore = max(inputScore, highScore);
//            lowScore = min(inputScore, lowScore);
//            totalScore += inputScore;
//
//            judgeCount++;
//
//        } while (judgeCount <= 5);
//
//        difficulty = CheckDegreeOfDifficulty();
//        diverTotal = totalScore - highScore - lowScore;
//        totalScore = (diverTotal / 3) * difficulty;
//
//        overallScore += totalScore;
//        allDivers++;
//
//        DisplayDiverInformation(name, city, totalScore);
//
//        cout << "\n\tDo you want to process another diver? (Y/N): ";
//        cin >> input;
//    }
//
//    avgScoreAllDivers = overallScore / allDivers;
//
//    EventSummary(avgScoreAllDivers, allDivers);
//
//    return 0;
//}
//
//char WelcomeIntro()
//{
//    char input;
//    cout << "\n";
//    cout << "\tDiving Competition\n";
//    cout << "\tReady to get started? (Y/N): ";
//    cin >> input;
//    return input;
//}
//
//string InputDiverName()
//{
//    string name;
//    cout << "\n\t\tEnter the diver's name: ";
//    getline(cin,name);
//    return name;
//}
//
//string InputDiverCity()
//{
//    string city;
//    cout << "\t\tEnter the diver's city: ";
//    getline(cin,city);
//    return city;
//}
//
//double CheckDegreeOfDifficulty()
//{
//    double difficulty;
//    cout << "\t\t\tWhat was the degree of difficulty? ";
//    cin >> difficulty;
//
//    while ((difficulty < 1) || (difficulty > 1.67))
//    {
//        cout << "Invalid degree of difficulty - Please re-enter a value between 1 - 1.67 ";
//        cin >> difficulty;
//    }
//
//    return difficulty;
//}
//
//void EventSummary(double avgScoreAllDivers, int allDivers)
//{
//    cout << "\t\t\tEVENT SUMMARY" << endl;
//    cout << "\tNumber of divers participating: \t" << allDivers << "\n";
//    cout << "\tAverage score of all divers: \t\t" << avgScoreAllDivers << "\n";
//    cout << "\tPress any key to continue . . .";
//}
//
//void DisplayDiverInformation(string name, string city, double totalScore)
//{
//    cout << "\n\t\tDiver: " << name << ", City: " << city << endl;
//    cout << "\t\tOverall score was " << totalScore << endl;
//}
