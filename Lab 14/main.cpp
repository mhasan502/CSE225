#include <iostream>
#include "pqtype.cpp"
using namespace std;

void checkEmpty(bool b){
    if(b)
        cout << "Queue is Empty" <<endl;
    else
        cout << "Queue is not Empty" <<endl;
}

int main(){
    PQType<int> pq(15);
    checkEmpty(pq.IsEmpty());
    for(int i=0; i<10; i++){
        int temp;
        cin >> temp;
        pq.Enqueue(temp);
    }
    checkEmpty(pq.IsEmpty());
    int value;
    for(int i=0; i<10; i++){
        pq.Dequeue(value);
        cout << value << endl;
    }
    return 0;
}
