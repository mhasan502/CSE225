/*
 Task:
 Generate the driver file (main.cpp) where you perform the following tasks. Note that you cannot make any change to the
 header file or the source file.

 Given a set of coin values and an amount of money, determine the minimum number of coins to make the given amount of
 money. The input starts with an integer n,specifying the number of coin types. Next "n" integers are the coin values.
 The final integer is the amount of money you have to make. You can assume that the amount will always be possible to
 make using the given coin types.
*/

#include <iostream>
#include "QueType.cpp"
using namespace std;

int main() {

    QueType<int> queue, cost;
    int size;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int target;
    cin >> target;

    for (int i = 0; i < size; i++) {             // Pushing the coin values into the queue
        queue.Enqueue(array[i]);
        cost.Enqueue(1);
    }

    int temp, count = 0;

    while (true) {                               // Looping until the target is reached
        queue.Dequeue(temp);
        cost.Dequeue(count);

        if (temp == target)
            break;
        else {
            count++;
            for (int i = 0; i < size; i++) {
                queue.Enqueue(temp + array[i]);
                cost.Enqueue(count);
            }
        }
    }
    cout << count << endl;

    return 0;
}
