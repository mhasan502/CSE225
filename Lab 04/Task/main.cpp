#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

void checkItem(bool b){
    if(b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
}
void checkFull(bool b){
    if(b)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
}

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

    int &value=4;
    bool &boolVar;
    ut.RetrieveItem(value,boolVar);
    checkItem(boolVar);
    value=5;
    ut.RetrieveItem(value,boolVar);
    checkItem(boolVar);
    value=9;
    ut.RetrieveItem(value,boolVar);
    checkItem(boolVar);
    value=10;
    ut.RetrieveItem(value,boolVar);
    checkItem(boolVar);
    checkFull(ut.IsFull());
    ut.DeleteItem(5);
    checkFull(ut.IsFull());
    ut.DeleteItem(1);
    ut.Print();
    ut.DeleteItem(6);
    ut.Print();

    return 0;
}
