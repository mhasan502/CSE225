#include "dynarr.h"
#include <iostream>
using namespace std;

dynarr::dynarr() {
    data = NULL;
    row = 0, col = 0;
}

dynarr::dynarr(int row, int col) {
    data = new int *[row];
    for (int i = 0; i < row; i++) {
        data[i] = new int[col];
    }
}

dynarr::~dynarr() {
    delete[] data;
}

int dynarr::getValue(int rowIndex, int columnIndex) {
    return data[rowIndex][columnIndex];
}

void dynarr::setValue(int rowIndex, int columnIndex, int value) {
    data[rowIndex][columnIndex] = value;
}

void dynarr::allocate(int rowIndex, int columnIndex) {
    dynarr::~dynarr();
    data = new int *[rowIndex];
    for (int i = 0; i < rowIndex; i++) {
        data[i] = new int[columnIndex];
    }
}
