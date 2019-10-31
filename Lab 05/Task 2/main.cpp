#include <iostream>
#include "sortedtype.h"
#include "timeStamp.h"
#include "sortedtype.cpp"
#include "timeStamp.cpp"
using namespace std;

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
    st.Print();

    st.DeleteItem(t4);
    st.Print();
    return 0;
}
