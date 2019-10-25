#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main(){

    UnsortedType<int> ut;
    ut.InsertItem(5);
    ut.InsertItem(7);
    ut.InsertItem(6);
    ut.InsertItem(9);
    ut.Print();
    cout << ut.LengthIs() << endl;
    ut.InsertItem(1);
    ut.Print();

    return 0;
}
