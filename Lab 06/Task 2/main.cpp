#include <iostream>
#include "stacktype.cpp"
using namespace std;

int main(){

    StackType<char> st;
    string str = ")()()(";
    int count = 0;

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='('){
            st.Push(str[i]);
        }
        if(str[i]==')'){
            count++;
        }

    }
    while(count>0){
            st.Pop();
            count--;
    }
    if(st.IsEmpty())
        cout << "Balanced" << endl;
    else
        cout << "Unbalanced" << endl;

    return 0;
}
