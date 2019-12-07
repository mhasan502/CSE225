#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
using namespace std;

void checkEmpty(bool b){
    if(b)
        cout << "Tree is Empty" << endl;
    else
        cout << "Tree is not Empty" << endl;
}
int main(){
    TreeType<int> tree;
    checkEmpty(tree.IsEmpty());
    tree.InsertItem(4);
    tree.InsertItem(9);
    tree.InsertItem(2);
    tree.InsertItem(7);
    tree.InsertItem(3);
    tree.InsertItem(11);
    tree.InsertItem(17);
    tree.InsertItem(0);
    tree.InsertItem(5);
    tree.InsertItem(1);
    checkEmpty(tree.IsEmpty());
    cout << tree.LengthIs() << endl;
    bool b;int v=9;
    tree.RetrieveItem(v,b);
    if(b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
    v=13;
    tree.RetrieveItem(v,b);
    if(b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    tree.ResetTree(IN_ORDER); bool finish = 0;
    while(!finish){
        int value;
        tree.GetNextItem(value,IN_ORDER,finish);
        cout << value <<" ";
    }
    cout << endl;
    tree.ResetTree(PRE_ORDER);
    finish = 0;
    while(!finish){
        int value;
        tree.GetNextItem(value,PRE_ORDER,finish);
        cout << value <<" ";
    }
    cout << endl;
    tree.ResetTree(POST_ORDER);
    finish = 0;
    while(!finish){
        int value;
        tree.GetNextItem(value,POST_ORDER,finish);
        cout << value <<" ";
    }
    cout << endl;
    tree.MakeEmpty();
    checkEmpty(tree.IsEmpty());

    return 0;
}
