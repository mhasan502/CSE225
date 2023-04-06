/*
 Task 1:
 In the driver file (main.cpp), perform the following sub-tasks.
     1. Create two objects of this class, one with no constructor argument and one with the argument 5.
     2. Take five input values from the user and store them in the array inside the second object using the set method.
     3. For the second object, print all the values you just stored.
 Note that, you cannot assign anything in the first object since the array inside it has size 0. Neither can you change
 the size of this array to some other size.
*/

#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main() {

    int input;
    dynarr d1;                                   // Object initialization of "dynarr" class with no constructor argument
    dynarr d2(5);                                // Object initialization of "dynarr" class with arguments 5

    for (int i = 0; i < 5; i++) {                // Taking and storing 5 input values to "d2" object
        cin >> input;
        d2.setValue(i, input);
    }

    for (int i = 0; i < 5; i++) {                // Printing all the values stored on "d2" object
        cout << d2.getValue(i) << " ";
    }
    cout << endl;

    return 0;
}
