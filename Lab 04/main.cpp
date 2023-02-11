/*
 Task:
 Generate the driver file (main.cpp) where you perform the following tasks. Note that you cannot make any change to
 the header file or the source file.

 Operations to be performed:
    • Create a list of integers.
    • Insert four items.
    • Print the list.
    • Print the length of the list.
    • Insert one item.
    • Print the list.
    • Retrieve 4 and print whether found or not.
    • Retrieve 5 and print whether found or not.
    • Retrieve 9 and print whether found or not.
    • Retrieve 10 and print whether found or not.
    • Print if the list is full or not.
    • Delete 5.
    • Print if the list is full or not.
    • Delete 1.
    • Print the list.
    • Delete 6.
    • Print the list.

    • Write a class "studentInfo" that represents a student record. It must have variables to store the student ID,
    student’s name and student’s CGPA. It also must have a function to print all the values. You will also need to
    overload a few operators.
        • Create a list of objects of class "studentInfo".
        • Insert 5 student record.
        • Delete the record with ID15467.
        • Retrieve the record with ID 13569 and print whether found or not along with the entire record.
        • Print the list.

 Note:
 Helper functions are created to avoid code duplication. You can use them, or you can write your own.
*/

#include <iostream>
#include "unsortedtype.cpp"
#include "studentInfo.cpp"

using namespace std;

template<class T>
void Print(UnsortedType<T> u) {                  // Helper function to Print the list

    int length = u.LengthIs();
    T value;

    for (int i = 0; i < length; i++) {
        u.GetNextItem(value);
        cout << value << " ";
    }
    cout << endl;
}

template<class T>
void Retrieve(UnsortedType<T> u, T value) {      // Helper function to Retrieve an item
    bool b;
    u.RetrieveItem(value, b);

    if (b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

}

void checkFull(bool b) {                         // Helper function to check if the list is full
    if (b)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
}

int main() {

    // First Task
    UnsortedType<int> ut;                        // Creating an object of UnsortedType class and inserting 5, 7, 6 ,9

    ut.InsertItem(5);
    ut.InsertItem(7);
    ut.InsertItem(6);
    ut.InsertItem(9);

    Print(ut);                                   // Print the list

    cout << ut.LengthIs() << endl;               // Print the length of the list
    ut.InsertItem(1);                            // Insert one item in the list
    Print(ut);                                   // Print the list

    Retrieve(ut, 4);                             // Retrieving 4, 5, 9, 10 in the list and print whether the item is
    // found or not
    Retrieve(ut, 5);
    Retrieve(ut, 9);
    Retrieve(ut, 10);

    checkFull(ut.IsFull());                      // Print whether the list is full or not

    ut.DeleteItem(5);                            // Delete 5 from the list

    checkFull(ut.IsFull());                      // Print whether the list is full or not

    ut.DeleteItem(1);                            // Delete 1 from the list

    Print(ut);                                   // Print the list

    ut.DeleteItem(6);                            // Delete 6 from the list

    Print(ut);                                   // Print the list


    // Second Task
    studentInfo s1(15234, "Jon", 2.6),           // Creating objects of studentInfo class with the given information
    s2(13732, "Tyrion", 3.9),
            s3(13569, "Sandor", 1.2),
            s4(15467, "Ramsey2", 3.1),
            s5(16285, "Arya", 3.1);

    UnsortedType<studentInfo> students;          // Creating an object of UnsortedType class and inserting the
    // objects
    students.InsertItem(s1);
    students.InsertItem(s2);
    students.InsertItem(s3);
    students.InsertItem(s4);
    students.InsertItem(s5);

    studentInfo temp = 15467;                    // Creating a temporary object to search for 15467
    students.DeleteItem(temp);                   // Deleting the item from the list

    temp = 13569;                                // Creating a temporary object to search for 13569

    Retrieve(students, temp);                    // Retrieving the item from the list
    cout << temp << endl;                        // Printing the item

    // Printing the list
    for (int i = 0; i < students.LengthIs(); i++) {
        students.GetNextItem(temp);
        cout << temp;
    }

    return 0;
}
