/*
 Task:
 Generate the driver file (main.cpp) where you perform the following tasks. Note that you cannot make any change to the
 header file or the source file.

 Operations to be performed:
    • Write a class "timeStamp" that represents a time of the day. It must have variables to store the number of
      seconds, minutes and hours passed. It also must have a function to print all the values. You will also need to
      overload a few operators.
    • Create a list of objects of class "timeStamp".
    • Insert 5 time values in the format ssmmhh.
    • Delete the timestamp "25  36  17".
    • Print the list.

 Note:
 Lab manual has slight error on Expected Output section.
*/

#include <iostream>
#include "sortedtype.cpp"
#include "timeStamp.cpp"
using namespace std;

template<class T>
void Print(SortedType<T> u) {                    // Print function
    int length = u.LengthIs();
    T value;
    for (int i = 0; i < length; i++) {
        u.GetNextItem(value);
        cout << value << endl;
    }
    cout << endl;
}

int main() {

    SortedType<timeStamp> st;                    // Create a list of objects of class "timeStamp"

    timeStamp t1(15, 34, 23);                    // Insert 5 time values in the format ssmmhh
    st.InsertItem(t1);
    timeStamp t2(13, 13, 02);
    st.InsertItem(t2);
    timeStamp t3(43, 45, 12);
    st.InsertItem(t3);
    timeStamp t4(25, 36, 17);
    st.InsertItem(t4);
    timeStamp t5(52, 02, 20);
    st.InsertItem(t5);

    timeStamp temp(25, 36, 17);                  // Delete the timestamp "25  36  17"
    st.DeleteItem(temp);

    Print(st);                                   // Print the list

    return 0;
}
