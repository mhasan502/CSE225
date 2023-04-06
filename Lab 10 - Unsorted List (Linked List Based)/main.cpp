/*
 Task:
 Generate the driver file (main.cpp) where you perform the following tasks. Note that you cannot make any change to the
 header file or the source file.

 You are given two sequences of integers arranged in ascending order. Your task is to combine the sequences into one
 ascending sequence. In order to get full marks, you have to make sure that the time complexity of combining two
 sequences is `O(N)`. You can safely assume that no integer will be repeated.Input starts with a positive integer
 "m" which specifies the number of elements in the first sequence. Next "m" values are the elements in the first
 sequence. The next positive integer "n" specifies the number of elements in the second sequence. Next "n" values are
 the elements in the second sequence.The output is the combined sequence.
*/

#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main() {

    UnsortedType<int> list1, list2, merged;      // Create three lists

    int n, v;                                    // Taking inputs for list1
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v;
        list1.InsertItem(v);
    }

    cin >> n;                                    // Taking inputs for list2
    for (int i = 0; i < n; i++) {
        cin >> v;
        list2.InsertItem(v);
    }

    int value1, value2;
    int index1 = list1.LengthIs();
    int index2 = list2.LengthIs();
    list1.GetNextItem(value1);
    list2.GetNextItem(value2);

    while (index1 > 0 && index2 > 0) {           // Merging the lists
        if (value1 > value2) {
            merged.InsertItem(value1);
            index1--;
            if (index1 > 0)
                list1.GetNextItem(value1);
        } else if (value2 > value1) {
            merged.InsertItem(value2);
            index2--;
            if (index2 > 0)
                list2.GetNextItem(value2);
        } else {
            merged.InsertItem(value1);
            merged.InsertItem(value2);
            index1--;
            index2--;
            if (index1 > 0)
                list1.GetNextItem(value1);
            if (index2 > 0)
                list2.GetNextItem(value2);
        }
    }

    while (index1 > 0) {                         // Adding the remaining elements of list1
        merged.InsertItem(value1);
        index1--;
        if (index1 > 0)
            list1.GetNextItem(value1);
    }

    while (index2 > 0) {                         // Adding the remaining elements of list2
        merged.InsertItem(value2);
        index2--;
        if (index2 > 0)
            list2.GetNextItem(value2);
    }

    int value_merged;
    int index_merged = merged.LengthIs() - 1;

    while (index_merged >= 0) {                  // Printing the merged list
        merged.GetNextItem(value_merged);
        cout << value_merged << ' ';
        index_merged--;
    }
    cout << endl;

    return 0;
}
