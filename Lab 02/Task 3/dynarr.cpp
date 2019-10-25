#include "dynarr.h"
#include<iostream>
using namespace std;

dynarr::dynarr(){
    data = NULL;
    row = 0, col = 0;
}
dynarr::dynarr(int row, int col){
    data = new int*[row];
    for (int i = 0; i < row; i++) {
        data[i] = new int[col];
    }
}
dynarr::~dynarr(){
    delete [] data;
}
int dynarr::getValue(int row, int col){
    return data[row][col];
}
void dynarr::setValue(int row,int col, int value){
    data[row][col] = value;
}
void dynarr::allocate(int row, int col){
    data = new int*[row];
    for (int i = 0; i < row; i++) {
        data[i] = new int[col];
    }
}
