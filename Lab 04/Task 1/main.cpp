#include <iostream>
#include "unsortedtype.cpp"
using namespace std;

template <class T>
void Print(UnsortedType<T> u){

    int length = u.LengthIs();
    T value;
    for(int i=0; i<length; i++){
        u.GetNextItem(value);
        cout << value << " ";
    }
    cout << endl;
}
template <class T>
void Retrieve(UnsortedType<T> u, T value){
    bool b;
    u.RetrieveItem(value,b);
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
    Print(ut);

    cout << ut.LengthIs() << endl;
    ut.InsertItem(1);
    Print(ut);

    Retrieve(ut,4);
    Retrieve(ut,5);
    Retrieve(ut,9);
    Retrieve(ut,10);

    checkFull(ut.IsFull());
    ut.DeleteItem(5);
    checkFull(ut.IsFull());
    ut.DeleteItem(1);
    Print(ut);
    ut.DeleteItem(6);
    Print(ut);

    return 0;
}
