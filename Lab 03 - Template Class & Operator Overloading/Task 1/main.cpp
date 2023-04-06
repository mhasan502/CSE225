/*
 Task 1:
 Recall the class we used in the previous lab to allocate memory dynamically.Modify the header file and  the  source
 file  given  below  so  that  they  now  work  as  template  class  (the  array  elements  in  the dynamically
 allocated memory can be any type as the user defines).

 Note:
 Template class let us define the mechanism/behaviour of a class without knowing the actual datatype. It helps us to
 dynamically allocate memory for any type of data.
*/

#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main() {

    int input, size = 5;
    dynArr<int> dint(size);                      // Object initialization of "dynArr" class with arguments

    for (int i = 0; i < size; i++) {             // Taking and storing "size" number of input values to "dint" object
        cin >> input;
        dint.setValue(i, input);
    }

    for (int i = 0; i < size; i++) {             // Printing all the values stored on "dint" object
        cout << dint.getValue(i) << " ";
    }
    cout << endl;

    return 0;
}
