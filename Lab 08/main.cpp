#include <iostream>
#include "stacktype.cpp"
#include <string>
using namespace std;

bool isOperator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='('||ch==')')
        return true;
    else
        return false;
}
bool priority(char ch){
    if(ch=='+') return 1;
    else if(ch=='-') return 2;
    else if(ch=='*') return 3;
    else if(ch=='/') return 4;
    else if(ch=='(') return 5;
    else if(ch==')') return 0;


}

int main(){
    string input, postfix;
    input = "(2+3)*(4+5)*8";
    StackType<char> st;
    for(int i=0; i<input.size(); i++){
        if(input[i]=='('||input[i]==')'){
            if(input[i]=='(')
                st.Push(input[i]);
            else{
                while(!st.IsEmpty()){
                    postfix+=st.Top();
                    st.Pop();
                }
            }
        }

        else if(isdigit(input[i])){
            postfix+=input[i];
        }
        else if(isOperator(input[i])){
            if(st.IsEmpty())
                st.Push(input[i]);
            else if(priority(st.Top())>=priority(input[i]))
                st.Push(input[i]);
            else{
                while(!st.IsEmpty()){
                    postfix+=st.Top();
                    st.Pop();
                }
            }
        }
    }
    while(!st.IsEmpty()){
        postfix+=st.Top();
        st.Pop();
    }
    cout << postfix << endl;

    return 0;
}
