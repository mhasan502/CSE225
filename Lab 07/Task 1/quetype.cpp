#include "quetype.h"

template<class ItemType>
QueType<ItemType>::QueType(int max) {
  maxQue = max + 1;
  front = maxQue - 1;
  rear = maxQue - 1;
  items = new ItemType[maxQue];
}
template<class ItemType>
QueType<ItemType>::QueType() {
  maxQue = 501;
  front = maxQue - 1;
  rear = maxQue - 1;
  items = new ItemType[maxQue];
}
template<class ItemType>
QueType<ItemType>::~QueType() {
  delete [] items;
}
template<class ItemType>
void QueType<ItemType>::MakeEmpty() {
  front = maxQue - 1;
  rear = maxQue - 1;
}
template<class ItemType>
bool QueType<ItemType>::IsEmpty() {
  return (rear == front);
}
template<class ItemType>
bool QueType<ItemType>::IsFull() {
  return ((rear+1)%maxQue == front);
}
template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem) {
  if (IsFull())
    throw FullQueue();
  else {
    rear = (rear +1) % maxQue;
    items[rear] = newItem;
  }
}
template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item) {
  if (IsEmpty())
    throw EmptyQueue();
  else {
    front = (front + 1) % maxQue;
    item = items[front];
  }
}
