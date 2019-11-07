#include <iostream>
#include "sortedtype.cpp"
#include "timeStamp.cpp"
using namespace std;

template <class T>
void Print(SortedType<T> u){

    int length = u.LengthIs();
    T value;
    for(int i=0; i<length; i++){
        u.GetNextItem(value);
        cout << value << endl;
    }
    cout << endl;
}
template <class T>
void Retrieve(SortedType<T> u, T value){
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

    SortedType<timeStamp> st;
    timeStamp t1(15,34,23);
    timeStamp t2(13,13,02);
    timeStamp t3(43,45,12);
    timeStamp t4(25,36,17);
    timeStamp t5(52,02,20);

    st.InsertItem(t1);
    st.InsertItem(t2);
    st.InsertItem(t3);
    st.InsertItem(t4);
    st.InsertItem(t5);
    Print(st);

    timeStamp temp(25,36,17);
    st.DeleteItem(temp);

    Print(st);

    return 0;
}
