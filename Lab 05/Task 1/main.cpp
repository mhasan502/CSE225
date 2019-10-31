#include <iostream>
#include "sortedtype.cpp"
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

    int value; bool boolVar;
    SortedType<int> st;
    cout << st.LengthIs() << endl;

    st.InsertItem(5);
    st.InsertItem(7);
    st.InsertItem(4);
    st.InsertItem(2);
    st.InsertItem(1);
    st.Print();

    value = 6;
    st.RetrieveItem(value,boolVar);
    checkItem(boolVar);

    value = 5;
    st.RetrieveItem(value,boolVar);
    checkItem(boolVar);

    checkFull(st.IsFull());
    st.DeleteItem(1);

    st.Print();
    checkFull(st.IsFull());

    return 0;
}
