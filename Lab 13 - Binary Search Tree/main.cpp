/*
 Task:
 Generate the driver file (main.cpp) where you perform the following tasks. Note that you cannot make any change to the
 header file or the source file.

 Operations to be performed:
    • Create a tree object.
    • Print if the tree is empty or not.
    • Insert ten items.
    • Print if the tree is empty or not.
    • Print the length of the tree.
    • Retrieve 9 and print whether found or not.
    • Retrieve 13 and print whether found or not.
    • Print the elements in the tree (inorder).
    • Print the elements in the tree (preorder).
    • Print the elements in the tree (postorder).
    • Make the tree empty.

    • Given a sequence of integers, determine the best ordering of the integers to insert them into a binary search
    tree. The best order is the one that will allow the binary search tree to have the minimum height. Hint: Sort the
    sequence (use the inorder traversal). The middle element is the root. Insert it into an empty tree. Now in the
    same way, recursively build the left subtree and then the right subtree.

*/

#include <iostream>
#include "binarysearchtree.cpp"

using namespace std;

void checkEmpty(bool b) {
    if (b)
        cout << "Tree is Empty" << endl;
    else
        cout << "Tree is not Empty" << endl;
}

void itemFound(TreeType<int> &tree, int item) {
    bool found;
    tree.RetrieveItem(item, found);
    if (found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
}

void insertRecursively(TreeType<int> &newTree, int array[], int start, int end) {
    int mid = (start + end) / 2;
    newTree.InsertItem(array[mid]);

    if (start == end)
        return;

    if (start < mid)
        insertRecursively(newTree, array, start, mid - 1);

    insertRecursively(newTree, array, mid + 1, end);
}

int main() {

    // First Task
    TreeType<int> tree;                          // Create a tree object

    checkEmpty(tree.IsEmpty());                  // Print if the tree is empty or not

    tree.InsertItem(4);                          // Insert ten items
    tree.InsertItem(9);
    tree.InsertItem(2);
    tree.InsertItem(7);
    tree.InsertItem(3);
    tree.InsertItem(11);
    tree.InsertItem(17);
    tree.InsertItem(0);
    tree.InsertItem(5);
    tree.InsertItem(1);

    checkEmpty(tree.IsEmpty());                  // Print if the tree is empty or not

    cout << tree.LengthIs() << endl;             // Print the length of the tree

    itemFound(tree, 9);                          // Retrieve 9 and print whether found or not
    itemFound(tree, 13);                         // Retrieve 13 and print whether found or not

    // Print the elements in the tree (inorder)
    tree.ResetTree(IN_ORDER);
    bool finish = false;
    while (!finish) {
        int value;
        tree.GetNextItem(value, IN_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;

    // Print the elements in the tree (preorder)
    tree.ResetTree(PRE_ORDER);
    finish = false;
    while (!finish) {
        int value;
        tree.GetNextItem(value, PRE_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;

    // Print the elements in the tree (postorder)
    tree.ResetTree(POST_ORDER);
    finish = false;
    while (!finish) {
        int value;
        tree.GetNextItem(value, POST_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;

    tree.MakeEmpty();                            // Make the tree empty


    // Second Task
    TreeType<int> sequenceTree;                  // Create a tree object
    int num = 10;
    int sequence[] = {11, 9, 4, 2, 7, 3, 17, 0, 5, 1};

    for (int i = 0; i < num; i++) {
        sequenceTree.InsertItem(sequence[i]);
    }

    int n, arr[num + 10], index = 0;

    sequenceTree.ResetTree(IN_ORDER);
    finish = false;
    while (!finish) {
        sequenceTree.GetNextItem(n, IN_ORDER, finish);
        arr[index++] = n;
    }

    TreeType<int> newTree;

    insertRecursively(newTree, arr, 0, index - 1);

    newTree.ResetTree(PRE_ORDER);
    finish = false;
    while (!finish) {
        newTree.GetNextItem(n, PRE_ORDER, finish);
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
