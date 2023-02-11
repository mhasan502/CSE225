/*
 Task 3:
 Using the "new" operator, allocate a two dimensional integer array. The number of rows and columns are going to be
 provided by the user as input. However, in this task, all of the rows are not the same size (the array is uneven).
 The user will specify how many elements the individual rows will have. Assign values to the array elements by taking
 user inputs and then print the values. Finally, de-allocate the array using the "delete" operator.

 Notes:
 The size of rows won't be the same. We have to dynamically allocate the size of an array. This task is the
 combination of the Task 1 and Task 2.
*/

#include <iostream>
using namespace std;

int main() {

    int row, column;                             // Variables to store user specified row and column size
    cin >> row >> column;                        // Taking inputs and storing row and column size

    int colArray[row];                           // Initialize colArray to store different column size in row
    int **ptr = new int *[row];                  // Allocating a pointer array to be used to store "row" array addresses

    for (int i = 0; i < row; i++) {
        cin >> column;                           // Taking and storing the inputs of specified row size
        ptr[i] = new int[column];                // Dynamically allocating array size for each row
        colArray[i] = column;                    // Storing different column size to keep track
    }

    for (int i = 0; i < row; i++) {              // Taking input and saving its addresses on the arrays
        for (int j = 0; j < colArray[i]; j++) {
            cin >> ptr[i][j];
        }
    }

    for (int i = 0; i < row; i++) {              // Printing each values of the arrays
        for (int j = 0; j < colArray[i]; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] ptr;                                // De-allocating memory

    return 0;
}
