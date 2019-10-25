#include "dynarr.h"
#include<iostream>
using namespace std;

dynarr::dynarr(){
    data = NULL;
    size = 0;
}
dynarr::dynarr(int s){
    data = new int[s];
    size = s;
}
dynarr::~dynarr(){
    delete [] data;
}
int dynarr::getValue(int index){
    return data[index];
}
void dynarr::setValue(int index, int value){
    data[index] = value;
}
void dynarr::allocate(int s){
    data = new int[s];
}
