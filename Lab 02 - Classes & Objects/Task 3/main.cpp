/*
 Task 3:
 Modify  the  header  file  and  the source  files  again,  so that  it  works  for two  dimensional  array where
 all  the rows  are  the  same  size.  The  user  will  specify  the  number  of  rows  and  columns as  well  as
 the  content  of  the  array, which you will take as input from user in the main function.

 Note:
 In the header file, we have introduced 2D array.
*/

#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main() {

    int row, col, input;
    dynarr d(5, 5);                              // Object initialization of "dynarr" class with arguments

    cin >> row >> col;                           // Taking and storing specified input array sizes
    d.allocate(row, col);                        // Allocating "row" and "col" sized array on "d" object

    for (int i = 0; i < row; i++) {              // Taking and storing "size" number of input values to "d" object
        for (int j = 0; j < col; j++) {
            cin >> input;
            d.setValue(i, j, input);
        }
    }
    for (int i = 0; i < row; i++) {              // Printing all the values stored on "d" object
        for (int j = 0; j < col; j++) {
            cout << d.getValue(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
