#include <iostream>
using namespace std;

int main() {
    int row, col;   //Initialize row and col
    cin >> row;    //Input row

    int colArray[row];    //Initialize colArray to store different col size in row
    int** ptr = new int*[row];    //Allocate an integer array(row)

    for(int i=0; i<row; i++) {
        cin >> col;                 //Input col size in different row
        ptr[i] = new int[col];      //Initialize memory(for col) for each row
        colArray[i] = col;          //Store different col size
    }
    for(int i=0; i<row; i++){     //User Input
        for(int j=0; j<colArray[i]; j++){
            cin >> ptr[i][j];
        }
    }
    for(int i=0; i<row; i++){     //Output
        for(int j=0; j<colArray[i]; j++){
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    
    delete [] ptr;    //Deallocate memory

    return 0;
}
