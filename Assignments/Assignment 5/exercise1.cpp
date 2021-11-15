#include <iostream>

using namespace std;

//Function declarations.

int readDials(char&, char&, char&, char&, char&, char&, char&, char&);

int toDigit(char&);

void AcknowledgeCall(char&, char&, char&, char&, char&, char&, char&, char&);

int main()

{

     char place1=' ', place2 = ' ', place3 = ' ', place4 = ' ', place5 = ' ', place6 = ' ', place7 = ' ', place8 = ' ';

     int returnValue;

     //Call readDials and save the return value in the integer returnValue

     returnValue = readDials(place1, place2, place3, place4, place5, place6, place7, place8);

     switch (returnValue)

     {

              //If the phone number complies wiht the rules,

              //display the phone number that is dialed

          case 0:       AcknowledgeCall(place1, place2, place3, place4, place5, place6, place7, place8); break;

              //If one or more of the digits is not valid,

              //print the corresponding error message

          case -1: cout << "ERROR - An invalid character was entered" << endl;

              cout << "Try again" << endl;

              break;

              //If the phone number begins with a 0 (zero),

              //print the corresponding error message

          case -2: cout << "ERROR - Phone number cannot begin with 0" << endl;

              cout << "Try again" << endl;

              break;

              //If the phone number begins with a 555,

              //print the corresponding error message

          case -3: cout << "ERROR - Phone number cannot begin with 555" << endl;

              cout << "Try again" << endl;

              break;

              //If the phone number doesn’t have a hyphen (-) in the 4th position,

              //print the corresponding error message

          case -4: cout << "ERROR - Hyphen is not in the correct position" << endl;

              cout << "Try again" << endl;

              break;

     }

     return 0;

}

//Reads each digit and letter dialed into 8 separate char variables

//and returns 0, If the phone number complies with the rules.

//reuturns -1, If one or more of the digits is not valid

//reuturns -2, If the phone number begins with a 0 (zero)

//reuturns -3, If the phone number begins with a 555

//reuturns -4, If the phone number doesn’t have a hyphen (-) in the 4th position

int readDials(char &place1, char &place2, char &place3, char &place4, char &place5, char &place6, char &place7, char &place8 )

{

     cout << "Enter a phone number(Q to quit): ";

     cin >> place1;

     if (place1 == 'Q')

          return -5;

     cin >> place2;

     cin >> place3;

     cin >> place4;

     if (place4 != '-')

          return -4;

     cin >> place5;

     cin >> place6;

     cin >> place7;

     cin >> place8;

     if (toDigit(place1) != 0 || toDigit(place2) != 0 || toDigit(place3) != 0

          || toDigit(place5) != 0 || toDigit(place6) != 0

          || toDigit(place7) != 0 || toDigit(place8) != 0)

          return -1;

     if (place1 == '0')

          return -2;

     if (place1 == '5' && place2 == '5' & place3 == '5')

          return -3;

     return 0;

}

//Receives a single char argument by reference, and returns 0, if the

//recieved argument is a valid digit. returns -1, otherwise.

int toDigit(char &place)

{

     place = toupper(place);

     if ((place >= '0' && place <= '9') || (place >= 'A' && place <= 'Z'))

     {

          if (place >= 'A' && place <= 'Z')

          {

              if (place == 'A' || place == 'B' || place == 'C')

                   place = '2';

              else if (place == 'D' || place == 'E' || place == 'F')

                   place = '3';

              else if (place == 'G' || place == 'H' || place == 'I')

                   place = '4';

              else if (place == 'J' || place == 'K' || place == 'L')

                   place = '5';

              else if (place == 'M' || place == 'N' || place == 'O')

                   place = '6';

              else if (place == 'P' || place == 'Q' || place == 'R'|| place == 'S')

                   place = '7';

              else if (place == 'T' || place == 'U'|| place == 'V')

                   place = '8';

              else if (place == 'W' || place == 'X' || place == 'Y'|| place == 'Z')

                   place = '9';

          }

          return 0;

     }

     else

          return -1;

}

//Displays the converted number

void AcknowledgeCall(char &place1, char &place2, char &place3, char &place4, char &place5, char &place6, char &place7, char &place8)

{

     cout << "Phone Number Dialed:" <<place1<< place2 << place3 << place4 << place5 << place6 << place7 << place8 << endl;

}