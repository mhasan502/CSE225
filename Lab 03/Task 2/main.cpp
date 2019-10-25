#include <iostream>
#include "complex.h"
#include "complex.cpp"
using namespace std;

int main(){
    Complex c1(5,2), c2(5,3);
    Complex c3 = c1+c2;
    Complex c4 = c1*c2;
    bool b = (c1!=c2);
    
    c3.Print();
    c4.Print();
    
    cout << b << endl;

    return 0;
}
