#include <iostream> 

// Recursion

using namespace std;

/*
This is an example of recursive function calls. A function calls or invokes itself again and again.
There must be some way to stop or end this. That is called its base case.
A point where it no longer can call itself and has to stop, returning a value.
This returning of values continues back until the first function call when the function
call is complete with the last value returned.
*/

int recurFactor(int);

int main() {
    cout << recurFactor(5) << endl;
    return 0;
} // end of main function

int recurFactor(int num) {
    int fact;
    if(num <= 1) { // Base case
        return 1;
    }
    fact = num * recurFactor(num - 1); // 5 * 24
                                       // 4 * 6
                                       // 3 * 2
                                       // 2 * 1
    return fact;
}