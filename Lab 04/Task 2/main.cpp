#include <iostream>
#include "unsortedtype.cpp"
#include "studentInfo.cpp"
using namespace std;

template <class T>
void Print(UnsortedType<T> u){

    int length = u.LengthIs();
    T value;
    for(int i=0; i<length; i++){
        u.GetNextItem(value);
        cout << value;
    }
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

    studentInfo s1(15234,"Jon",2.6),
                s2(13732,"Tyrion",3.9),
                s3(13569,"Sandor",1.2),
                s4(15467,"Ramsey2",3.1),
                s5(16285,"Arya",3.1);

    UnsortedType<studentInfo> ut;
    ut.InsertItem(s1);
    ut.InsertItem(s2);
    ut.InsertItem(s3);
    ut.InsertItem(s4);
    ut.InsertItem(s5);

    studentInfo temp = 15467;
    ut.DeleteItem(temp);
    temp = 13569;
    Retrieve(ut,temp);
    Print(ut);

    return 0;
}
