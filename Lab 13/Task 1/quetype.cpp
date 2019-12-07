#include "quetype.h"
#include <iostream>
using namespace std;

template <class ItemType>
QueType<ItemType>::QueType(){
    front = NULL;
    rear = NULL;
}
template <class ItemType>
bool QueType<ItemType>::IsEmpty(){
    return (front == NULL);
}
template<class ItemType>
bool QueType<ItemType>::IsFull(){
    NodeType* location;
    try{
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception){
        return true;
    }
}
template <class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem){
    if (IsFull())
        throw FullQueue();
    else{
        NodeType* newNode;
        newNode = new NodeType;
        newNode->info = newItem;
        newNode->next = NULL;
        if (rear == NULL)
            front = newNode;
        else
            rear->next = newNode;
        rear = newNode;
    }
}
template <class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item){
    if (IsEmpty())
        throw EmptyQueue();
    else{
        NodeType* tempPtr;
        tempPtr = front;
        item = front->info;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete tempPtr;
    }
}
template <class ItemType>
void QueType<ItemType>::MakeEmpty(){
    NodeType* tempPtr;
    while (front != NULL){
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL;
}
template <class ItemType>
QueType<ItemType>::~QueType(){
    MakeEmpty();
}
