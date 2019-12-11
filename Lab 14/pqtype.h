#ifndef PQTYPE_H_INCLUDED
#define PQTYPE_H_INCLUDED
#include "heaptype.h"
#include "heaptype.cpp"

class FullPQ{};
class EmptyPQ{};
template<class ItemType>
class PQType{
public:
    PQType(int);
    ~PQType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
private:
    int length;
    HeapType<ItemType> items;
    int maxItems;
};

#endif // PQTYPE_H_INCLUDED
