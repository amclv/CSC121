#include <iostream>
using namespace std;

int main() 
{
    int x;
    x = 25; // 25
    x = x + 5; // new x = old x + 5 // 30
    x++; // x = x + 1; post increment // 31

    cout << x << endl; // Guess 31
    cout << x++ << endl; // Guess 32
    cout << ++x << endl; // Guess 33
    cout << --x << endl; // Guess 32 // Pre increment
    cout << x-- << endl; // Guess 31
    cout << x << endl; // Guess 31
    x = 100 - x++; // 100 - x
    cout << x << endl;

    float y = x / 3.0; // Watch out for the operand datatypes
    cout << y << endl; //
    int i = 3;
    y = float(x) / i; // static casting
    cout << y << endl; //
    return 0;
}
