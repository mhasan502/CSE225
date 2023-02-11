/*
 Task 1:
 Using the "new" operator, allocate an integer array of user specified size (the user gives the size of the array as
 input). Assign values to the array elements by taking user inputs and then print the values. Finally, de-allocate the
 array using the "delete" operator.

 Notes:
 Allocation and De-allocation of memory is crucial to grant assign and free up memory space dynamically. We are given
 privilege to allocate and de-allocate memory whenever we need and whenever we don’t.
*/

#include <iostream>
using namespace std;

int main() {

    int arraySize;                               // A variable to store the user specified array size
    cin >> arraySize;                            // Taking input and storing on the "arraySize" variable

    int *ptr = new int[arraySize];               // Dynamically allocating an integer array with arraySize length

    for (int i = 0; i < arraySize; i++) {
        cin >> ptr[i];                           // Taking input and saving its addresses on the array
    }
    for (int i = 0; i < arraySize; i++) {
        cout << ptr[i] << " ";                   // Printing each values of the array
    }
    cout << endl;

    delete[] ptr;                                // De-allocating memory

    return 0;
}
