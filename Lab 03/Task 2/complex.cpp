#include <iostream>
#include "complex.h"
using namespace std;

Complex::Complex(){
    Real = 0;
    Imaginary = 0;
}
Complex::Complex(double r, double i){
    Real = r;
    Imaginary = i;
}
Complex Complex::operator+(Complex a){
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}
void Complex::Print(){
    cout << Real << endl;
    cout << Imaginary << endl;
}
