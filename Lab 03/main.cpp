#include <iostream>
#include"dynarr.h"
using namespace std;

int main(){
    int input, size=5;

    //cin >> size;
    dynArr<double> d1(size);

    for(int i=0; i<size; i++){
        //cin >> input;
        d1.setValue(i,input);
    }
    for(int i=0; i<size; i++){
        cout << d1.getValue(i) << " ";
    }
    return 0;
}
