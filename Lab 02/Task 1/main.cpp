#include<iostream>
#include"dynarr.h"
using namespace std;

int main(){
    
    int input;
    dynarr d1();
    dynarr d2(5);

    for(int i=0; i<5; i++){
        cin >> input;
        d2.setValue(i,input);
    }
    for(int i=0; i<5; i++){
            cout << d2.getValue(i) << " ";
    }
    return 0;
}
