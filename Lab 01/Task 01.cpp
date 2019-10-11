#include<iostream>
using namespace std;

int main(){
    int arraySize;    //Array Size initialize
    cin >> arraySize;    //Input Array Size

    int *ptr = new int[arraySize];    //Allocate an int array

    for(int i=0; i<arraySize; i++){    //Assigning values
        cin >> ptr[i];
    }
    for(int i=0; i<arraySize; i++){     //Array output
        cout << ptr[i] << " ";
    }
    delete [] ptr;    //Deallocate memory
}