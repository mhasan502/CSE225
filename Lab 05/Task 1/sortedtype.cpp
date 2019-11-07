#include "sortedtype.h"
#include <iostream>
using namespace std;

template <class ItemType>
SortedType<ItemType>::SortedType(){
    length = 0;
    currentPos = - 1;
}
template <class ItemType>
void SortedType<ItemType>::MakeEmpty(){
    length = 0;
}
template <class ItemType>
bool SortedType<ItemType>::IsFull(){
    return (length == MAX_ITEMS);
}
template <class ItemType>
int SortedType<ItemType>::LengthIs(){
    return length;
}
template <class ItemType>
void SortedType<ItemType>::ResetList(){
    currentPos = - 1;
}
template <class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType& item){
    currentPos++;
    item = info[currentPos];
}
template <class ItemType>
void SortedType<ItemType>::InsertItem(ItemType item){
    int location = 0;
    bool moreToSearch = (location < length);
    while(moreToSearch){
        if(item > info[location]){
            location++;
            moreToSearch = (location < length);
        }
        else if(item < info[location])
            moreToSearch = false;
    }
    for(int index = length; index > location; index--)
        info[index] = info[index - 1];
    info[location] = item;
    length++;
}
template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item){
    int location = 0;
    while(item != info[location])
        location++;
    for(int index = location + 1; index < length; index++)
        info[index - 1] = info[index];
    length--;
}
template <class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType& item, bool& found){
    int midPoint, first = 0, last = length - 1;
    bool moreToSearch = (first <= last);
    found = false;
    while(moreToSearch && !found){
        midPoint = (first + last) / 2;
        if(item < info[midPoint]){
            last = midPoint - 1;
            moreToSearch = (first <= last);
        }
        else if(item > info[midPoint]){
            first = midPoint + 1;
            moreToSearch = (first <= last);
        }
        else{
            found = true;
            item = info[midPoint];
        }
    }
}
