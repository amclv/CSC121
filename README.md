#  C++ Notes for CSC121 | VSCODE
I use iTerm2 for my terminal with ohmyzsh on Mac M1. When I am in my directory of my files I use the following command to make a C++ executable file and run it in terminal.
```
g++ -o TestProgram TestProgram.cpp
./TestProgram
```
Everytime we use ```#include <iostream>``` we must pair it with a ```using namespace std```

Every project must start with an entry point which is:
```
int main()
{
	return 0;
}
```
Comments in C++:
```
// Single Comments
```
```
/*
Multiline Comments
*/
```
Statement: ```cout << "Hello World!" >> endl;```

#  Datatypes
```
string name = "John";
int age = 69;
float measure = 3.5;
double size = .000000010;
char letter = 'A';
bool imAwesome = true;
```

#  Arithmetics

PEMDAS precedence (P MD AS)(C++ does not use Exponents)(left -> right in order)
```
+ = Addition
- = Subtraction
* = Multiplication
/ = Division
% = Modulos (Remainder)
```
Example:
```
Paranthesis is first
	2 + (3 + 5 - 8 / 4)
Division is next
	2 + (3 + 5 - 2)
Since AS(Addition and Subtraction are at the same level you go from left to right)
Addition is next
	2 + (8 - 2)
Subtraction is next
	2 + (6)
Addition last
	8
```