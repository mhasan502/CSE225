#include <iostream>
#include "sortedtype.cpp"
using namespace std;

template <class T>
void Print(SortedType<T> u){

    int length = u.LengthIs();
    T value;
    for(int i=0; i<length; i++){
        u.GetNextItem(value);
        cout << value << " ";
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

    SortedType<int> st;
    cout << st.LengthIs() << endl;

    st.InsertItem(5);
    st.InsertItem(7);
    st.InsertItem(4);
    st.InsertItem(2);
    st.InsertItem(1);
    Print(st);

    Retrieve(st,6);
    Retrieve(st,5);

    checkFull(st.IsFull());
    st.DeleteItem(1);

    Print(st);
    checkFull(st.IsFull());

    return 0;
}
