/*
 Task:
 Generate the driver file (main.cpp) where you perform the following tasks. Note that you cannot make any change to the
 header file or the source file.

 Operations to be performed:
    • Create a queue of integers of size 5.
    • Print if the queue is empty or not.
    • Enqueue four  items.
    • Print if the queue is empty or not.
    • Print if the queue is full or not.
    • Enqueue another item.
    • Print the values in the queue (in the order the values are given as input).
    • Print if the queue is full or not.
    • Enqueue another item.
    • Dequeue two items.
    • Print the values in the queue (in the order the values are given as input).
    • Dequeue three items.
    • Print if the queue is empty or not.
    • Dequeue an item.

    •  Take an integer "n" from the user as input and use a queue to print binary values of each integer from 1 to
    "n" . Here is how  it can be done.
        • Create an empty queue.
        • Enqueue the first binary number “1” to the queue.
        • Now run a loop for generating and printing "n" binary numbers.
            ▪ Dequeue and print the value.
            ▪ Append “0” at the dequeued value and enqueue it.
            ▪ Append “1” at the dequeued value and enqueue it.

 Note:
 We can not insert an item in a full queue. Similarly, we can not remove an item from an empty queue.
 To print the queue in order, we have to dequeue the values and enqueue it in a temporary variable. The "temp"
 variable in the "Print()" function is used for this purpose.
 Helper functions are created to avoid code duplication. You can use them, or you can write your own.
*/


#include <iostream>
#include "quetype.cpp"
using namespace std;

void checkEmpty(bool b) {                        // Helper function to check if the stack is empty
    if (b)
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;
}

void checkFull(bool b) {                         // Helper function to check if the list is full
    if (b)
        cout << "Queue is full" << endl;
    else
        cout << "Queue is not full" << endl;
}

void Print(QueType<int> &queType) {                     // Helper function to print the list
    QueType<int> temp;

    while (!queType.IsEmpty()) {
        int value;
        queType.Dequeue(value);
        cout << value << " ";
        temp.Enqueue(value);
    }
    cout << endl;

    while (!temp.IsEmpty()) {
        int value;
        temp.Dequeue(value);
        queType.Enqueue(value);
    }
}

int main() {

    // First Task
    QueType<int> queue(5);                       // Create a queue of integer sof size 5

    checkEmpty(queue.IsEmpty());                 // Print if the queue is empty or not

    queue.Enqueue(5);                            // Enqueue four items 5, 7, 4, 2
    queue.Enqueue(7);
    queue.Enqueue(4);
    queue.Enqueue(2);

    checkEmpty(queue.IsEmpty());                 // Print if the queue is empty or not

    checkFull(queue.IsFull());                   // Print if the queue is full or not

    queue.Enqueue(6);                                // Enqueue another item 6

    Print(queue);                                // Print the values in the queue

    checkFull(queue.IsFull());                   // Print if the queue is full or not

    if (!queue.IsFull())                         // Enqueue another item 8
        queue.Enqueue(8);
    else
        cout << "Queue Overflow" << endl;

    int d;                                       // Dequeue two items
    queue.Dequeue(d);
    queue.Dequeue(d);

    Print(queue);                                // Print the values in the queue

    queue.Dequeue(d);                            // Dequeue three items
    queue.Dequeue(d);
    queue.Dequeue(d);

    checkEmpty(queue.IsEmpty());                 // Print if the queue is empty or not

    if (!queue.IsEmpty())                        // Dequeue an item
        queue.Dequeue(d);
    else
        cout << "Queue Underflow" << endl;


    // Second Task
    QueType<string> binary;                       // Create an empty queue
    int n;
    string var;
    cin >> n;

    binary.Enqueue("1");                          // Enqueue the first binary number "1" to the queue

    while (n--) {                                // Run a loop for generating and printing "n" binary numbers
        binary.Dequeue(var);                      // Dequeue and print the value
        string s1 = var;
        cout << s1 << endl;

        string s2 = s1;
        binary.Enqueue(s1.append("0"));           // Append "0" at the dequeued value and enqueue it
        binary.Enqueue(s2.append("1"));           // Append "1" at the dequeued value and enqueue it
    }

    return 0;
}
