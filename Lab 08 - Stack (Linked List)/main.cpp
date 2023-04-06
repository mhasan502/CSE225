/*
 Task:
 Generate the driver file (main.cpp) where you perform the following tasks. Note that you cannot make any change to the
 header file or the source file.

 Take infix expressions from the user as input, determine the outcome of the input and gives that back to user as
 output, or the text “Invalid input” if the input is not a valid one.You will have to solve this problem in
 two steps. First, you have to convert the input from infix notation to postfix notation. You are going to need
 a  stack in order to do so. In the next step, you will have to evaluate the postfix input and determine the
 final  result. Again, you will need a stack in order to do this. All the operands in the infix expressions are
 single digit non-negative operands and the operators include addition (+), subtraction (-), multiplication (*) and
 division (/).
*/

#include <iostream>
#include <string>
#include "stacktype.cpp"
using namespace std;

int priority(char ch) {                          // returns the priority of the operator
    int value = 0;
    if (ch == '+') value = 1;
    else if (ch == '-') value = 2;
    else if (ch == '*') value = 3;
    else if (ch == '/') value = 4;

    return value;
}

int main() {
    string input, postfix;
    cin >> input;                                // Take input from user

    // First step: Convert infix to postfix
    StackType<char> st;
    for (char i: input) {
        if (i == ' ')                            // ignore spaces
            continue;

        if (isdigit(i))                          // if it is a digit, add it to the postfix string
            postfix += i;

        else {
            if (i == '(' || i == ')') {
                if (i == '(')                    // if it is an opening bracket, push it to the stack
                    st.Push(i);

                else {                           // if it is a closing bracket, pop all the operators from the stack
                    while (!st.IsEmpty() && st.Top() != '(') {
                        postfix = postfix + " " + st.Top();
                        st.Pop();
                    }

                    if (st.IsEmpty()) {          // if the stack is empty, the input is invalid
                        cout << "Invalid input" << endl;
                        return 0;
                    }
                    st.Pop();                     // pop the opening bracket
                }
                continue;
            }

            // pop all the operators from the stack that have higher priority than the current operator
            while (!st.IsEmpty() && st.Top() != '(' && priority(st.Top()) > priority(i)) {
                postfix = postfix + " " + st.Top();
                st.Pop();
            }
            postfix += " ";
            st.Push(i);                          // push the current operator to the stack
        }
    }

    while (!st.IsEmpty()) {                      // pop all the remaining operators from the stack
        if (st.Top() == '(') {
            cout << "Invalid input" << endl;
            return 0;
        }
        postfix = postfix + " " + st.Top();
        st.Pop();
    }


    // Second step: Evaluate postfix
    StackType<double> result;
    string value;

    for (int i = 0; i < postfix.length(); i++) {

        // if it is an operator, pop two values from the stack
        if (!isdigit(postfix[i]) && postfix[i] != ' ') {

            double value2 = result.Top();
            result.Pop();

            if (result.IsEmpty()) {
                cout << "Invalid input" << endl;
                return 0;
            }
            double value1 = result.Top();
            result.Pop();

            // perform the required operation and push the result back to the stack
            if (postfix[i] == '+')
                result.Push(value1 + value2);
            else if (postfix[i] == '-')
                result.Push(value1 - value2);
            else if (postfix[i] == '*')
                result.Push(value1 * value2);
            else if (postfix[i] == '/')
                result.Push(value1 / value2);
            i++;
        }

        else if (isdigit(postfix[i])) {          // if it is a digit, add it to the value string
            value += postfix[i];
        }

        else if (postfix[i] == ' ') {            // if it is a space, push the value to the stack
            char *ptr;

            // convert the value string to double and push it to the stack
            if (!value.empty())
                result.Push(strtod(value.c_str(), &ptr));
            value = "";
        }
    }

    cout << result.Top() << endl;

    return 0;
}
