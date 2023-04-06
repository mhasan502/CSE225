/*
 Task 2:
 Using the "new" operator, allocate a two dimensional character array. Again the number of rows and columns are going to
 be provided by the user as input. All of the rows are the same size. Take character strings as input from the user and
 then print the strings. Finally, de-allocate the array using the "delete" operator.

 Notes:
 We are using Pointer to Pointer (Double Pointer) technique to store a 2D array. The first pointer is used to store the
 address of the variable. And the second pointer is used to store the address of the first pointer.
*/

#include <iostream>
using namespace std;

int main() {

    int row, column;                             // Variables to store user specified row and column size
    cin >> row >> column;                        // Taking inputs and storing row and column size

    int **ptr = new int *[row];                  // Allocating a pointer array to be used to store "row" array addresses

    for (int i = 0; i < row; i++) {
        ptr[i] = new int[column];                // Dynamically allocating arrays to store the column elements
    }

    for (int i = 0; i < row; i++) {              // Taking input and saving its addresses on the arrays
        for (int j = 0; j < column; j++) {
            cin >> ptr[i][j];
        }
    }

    for (int i = 0; i < row; i++) {              // Printing each values of the arrays
        for (int j = 0; j < column; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] ptr;                                // De-allocating memory

    return 0;
}
