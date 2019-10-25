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
Complex Complex::operator +(Complex a){
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}
Complex Complex::operator *(Complex a){
    Complex t;
    t.Real = (Real*a.Real) - (Imaginary*a.Imaginary);
    t.Imaginary = (Real*a.Imaginary)-(Imaginary*a.Real);
    return t;
}
bool Complex::operator !=(Complex a){
    bool t = false;
    if(Real==a.Real && Imaginary==a.Imaginary){
       t = true;
    }
}
void Complex::Print(){
    cout << Real <<" + "<< Imaginary <<"i" << endl;
}
