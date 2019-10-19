#include <iostream>
#include "dynarr.h"
#include "dynarr.cpp"
using namespace std;

int main() {
    int input, size = 5;
    dynArr<int> di(size);

    for (int i = 0; i < size; i++) {
        cin >> input;
        di.setValue(i, input);
    }
    for (int i = 0; i < size; i++) {
        cout << di.getValue(i) << " ";
    }

    return 0;
}
