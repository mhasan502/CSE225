#include<iostream>
using namespace std;

int main() {
    int row, col;    //Initialize row and col
    cin >> row >> col;    //Input row and col size

    string **ptr = new string* [row];   //Allocate a string array(row)

    for (int i = 0; i < row; i++) {    //Allocate a string array(col)
        ptr[i] = new string[col];    //Initialize memory(for col) for each row
    }
    for (int i = 0; i < row; i++) {    //User input
        for (int j = 0; j < col; j++) {
            cin >> ptr[i][j];
        }
    }
    for (int i = 0; i < row; i++){    //Output
        for (int j = 0; j < col; j++){
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    delete [] ptr;    //Deallocate memory

    return 0;
}
