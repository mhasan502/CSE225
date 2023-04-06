/*
 Task:
 Generate the driver file (main.cpp) where you perform the following tasks.

 Operations to be performed:
    • Create a "PQType" object with size 15.
    • Print if the queue is empty or not.
    • Insert ten items, in the order they appear.
    • Print if the queue is empty or not.
    • Dequeue one element and print the dequeued value.
    • Dequeue one element and print the dequeued value.

    • You have "N" magical bags of candies in front of you. The i-th bag has "A_i" candies in it. It takes you one
    minute to finish a bag of candies, no matter how many candies in it. Every time you finish a bag with "X" candies
    in it, the bag is magically replenished with "X/2" (rounded down to the nearest integer) more candies.
    Write a program that determines the maximum number of candies you can eat in "K" minutes.
    The input is a sequence of integers. The first integer "N" is the number of bags. The next integer "K" is the number
    of minutes you have. The next "N" integers is the number of candies in the bags. The output of your program is a
    single integer which represents the maximum number of candies you can eat.
*/

#include <iostream>
#include "pqtype.cpp"
using namespace std;

void checkEmpty(bool b) {                        // Function to check if the queue is empty
    if (b)
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;
}

int main() {

    PQType<int> pq(15);                          // Create a "PQType" object with size 15

    checkEmpty(pq.IsEmpty());                    // Print if the queue is empty or not

    for (int i = 0; i < 10; i++) {               // Insert ten items, in the order they appear
        int temp;
        cin >> temp;
        pq.Enqueue(temp);
    }
    checkEmpty(pq.IsEmpty());                    // Print if the queue is empty or not

    int value;
    pq.Dequeue(value);                           // Dequeue one element and print the dequeued value
    cout << value << endl;

    pq.Dequeue(value);                           // Dequeue one element and print the dequeued value
    cout << value << endl;


    // Second Problem
    int numberOfBags, minutes, total = 0;
    cin >> numberOfBags >> minutes;

    PQType<int> bagsOfCandies(numberOfBags);

    for (int i = 0; i < numberOfBags; i++) {
        int temp;
        cin >> temp;
        bagsOfCandies.Enqueue(temp);
    }

    for (int i = minutes; i > 0; i--) {
        bagsOfCandies.Dequeue(value);
        total += value;
        bagsOfCandies.Enqueue(value / 2);
    }

    cout << total << endl;

    return 0;
}
