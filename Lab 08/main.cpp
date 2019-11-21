#include <iostream>
#include "stacktype.cpp"
#include <string>
using namespace std;

bool priority(char ch){
    if(ch=='+') return 1;
    else if(ch=='-') return 2;
    else if(ch=='*') return 3;
    else if(ch=='/') return 4;


}

int main(){
    string input, postfix;
    cin >> input;
    StackType<char> st;
    for(int i=0; i<input.size(); i++){
        if(isdigit(input[i])){
            postfix+=input[i];
        }
        else{
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
