/*
 Task:
 Generate the driver file (main.cpp) where you perform the following tasks. Note that you cannot make any change to the
 header file or the source file.

 Operations to be performed:
    • Create a stack of integers.
    • Check if the stack is empty.
    • Push four items.
    • Check if the stack is empty.
    • Check if the stack is full.
    • Print the values in the stack (in the order the values are given as input).
    • Push another item.
    • Print the values in the stack.
    • Check if the stack is full.
    • Pop two items.
    • Print top item.

    • Take strings of parentheses from the user as input and use a stack to check if the string of parentheses is balanced
    or not.

 Note:
 To print the stack in order, we have to pop the values and push it in a temporary variable. The "temp" variable in
 the "Print()" function is used for this purpose.
 Since we don't know the size of the input, we are going to loop until the end of string. '\0' represents the end of
 string. We will ignore any input other than '(' and ')'. We will push if the array item is '('. We will pop the '('
 if the array item is ')'. If the stack is empty, and we encounter a ')', then the string is not balanced. Also, the
 balanced string should have an empty stack at the end of the loop.
 Helper functions are created to avoid code duplication. You can use them, or you can write your own.
*/

#include <iostream>
#include "stacktype.cpp"
using namespace std;

void checkEmpty(bool b) {                        // Helper function to check if the stack is empty
    if (b)
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is not Empty" << endl;
}

void checkFull(bool b) {                         // Helper function to check if the list is full
    if (b)
        cout << "Stack is Full" << endl;
    else
        cout << "Stack is not Full" << endl;
}

void Print(StackType<int> st) {                  // Helper function to print the list
    StackType<int> temp;

    while (!st.IsEmpty()) {
        temp.Push(st.Top());
        st.Pop();
    }

    while (!temp.IsEmpty()) {
        st.Push(temp.Top());
        cout << temp.Top() << " ";
        temp.Pop();
    }
    cout << endl;
}

int main() {

    // First Task
    StackType<int> st;                           // Creating a stack of integers

    checkEmpty(st.IsEmpty());                    // Check if the stack is empty

    st.Push(5);                                  // Push four items 5, 7, 4, 2
    st.Push(7);
    st.Push(4);
    st.Push(2);

    checkEmpty(st.IsEmpty());                    // Check if the stack is empty

    checkFull(st.IsFull());                      // Check if the stack is full

    Print(st);                                   // Print the values in the stack

    st.Push(3);                                  // Push another item 3

    Print(st);                                   // Print the values in the stack

    checkFull(st.IsFull());                      // Check if the stack is full

    st.Pop();                                    // Pop two items
    st.Pop();

    cout << st.Top() << endl;                    // Print top item


    // Second Task
    StackType<char> parentheses;                 // Create a stack of characters to take input

    string str;                                  // String to take input from the user
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {       // Loop until the end of string

        char array_item = str[i];

        if (array_item == '(')
            parentheses.Push(array_item);

        try {
            if (array_item == ')')
                parentheses.Pop();
        }
        catch (EmptyStack) {
            cout << "Unbalanced" << endl;
            return 0;
        }
    }

    if (parentheses.IsEmpty())
        cout << "Balanced" << endl;
    else
        cout << "Not balanced" << endl;

    return 0;
}
