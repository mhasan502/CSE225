/*
 Task 2:
 Modify the header and the source files. Add a member function "void allocate(int s)" which allows you to change the
 size of the array. Make sure that memory is not leaked.

 Note:
 In the header file, we are initializing new array by calling the destructor whenever "allocate" function will be
 called. This makes sure that memory is not being leaked.
*/

#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main() {

    int size, input;
    dynarr d(5);                                 // Object initialization of "dynarr" class with arguments

    cin >> size;                                 // Taking and storing specified input array size
    d.allocate(size);                            // Allocating "size" sized array on "d" object

    for (int i = 0; i < size; i++) {             // Taking and storing "size" number of input values to "d" object
        cin >> input;
        d.setValue(i, input);
    }

    for (int i = 0; i < size; i++) {             // Printing all the values stored on "d" object
        cout << d.getValue(i) << " ";
    }
    cout << endl;

    return 0;
}
