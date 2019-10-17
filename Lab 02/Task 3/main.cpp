#include <iostream>
#include"dynarr.h"
using namespace std;

int main(){
    
    int row,col,input;
    dynarr d1();
    dynarr d2(5, 5);
    cin >> row >> col;
    d2.allocate(row, col);

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> input;
            d2.setValue(i,j,input);
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << d2.getValue(i,j) << " ";
        }
        cout << endl;
    }
    return 0;
}
