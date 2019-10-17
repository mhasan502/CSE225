#include <iostream>
#include"dynarr.h"
using namespace std;

int main(){
    
    int size,input;
    dynarr d1();
    dynarr d2(5);
    cin >> size;
    d2.allocate(size);

    for(int i=0; i<size; i++){
        cin >> input;
        d2.setValue(i,input);
    }
    for(int i=0; i<size; i++){
        cout << d2.getValue(i) << " ";
    }
    return 0;
}
