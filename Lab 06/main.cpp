#include <iostream>
#include "StackType.h"
#include "StackType.cpp"
using namespace std;

void checkEmpty(bool b){
    if(b)
        cout << "Stack is Empty" <<endl;
    else
        cout << "Stack is not Empty" <<endl;
}
void checkFull(bool b){
    if(b)
        cout << "Stack is Full" <<endl;
    else
        cout << "Stack is not Full" <<endl;
}
void Print(StackType<int> st){
    StackType<int> temp;

    while(!st.IsEmpty()){
        temp.Push(st.Top());
        st.Pop();
    }
    while(!temp.IsEmpty()){
        st.Push(temp.Top());
        cout << temp.Top() << " ";
        temp.Pop();
    }
    cout << endl;
}

int main(){

    StackType<int> st;
    checkEmpty(st.IsEmpty());
    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);
    checkEmpty(st.IsEmpty());
    checkFull(st.IsFull());

    Print(st);
    st.Push(3);
    Print(st);

    checkFull(st.IsFull());

    st.Pop();
    st.Pop();

    cout << st.Top() << endl;

    return 0;
}
