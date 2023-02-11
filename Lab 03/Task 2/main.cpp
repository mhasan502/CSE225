/*
 Task 2:
 Recall the complex number class we discussed in our lectures. Modify the class and overload the *(multiplication)
 and the !=(not equal) operators for the class given below.
*/

#include <iostream>
#include "complex.cpp"
using namespace std;

int main() {

    Complex c1(5, 2), c2(5, 3);                  // Initializing two complex numbers

    Complex c3 = c1 + c2;                        // Adding two complex numbers
    c3.Print();

    Complex c4 = c1 * c2;                        // Multiplying two complex numbers
    c4.Print();

    cout << (c1 != c2) << endl;                  // Checking if two complex numbers are not equal

    return 0;
}
