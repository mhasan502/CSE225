#include "dynarr.h"

template<class T> dynArr<T>::dynArr(int s) {
    data = new T[s];
    size = s;
}
template<class T> dynArr<T>::~dynArr() {
    delete[] data;
}
template<class T> T dynArr<T>::getValue(int index) {
    return data[index];
}
template<class T> void dynArr<T>::setValue(int index, T value) {
    data[index] = value;
}
