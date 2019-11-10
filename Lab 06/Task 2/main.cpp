#include <iostream>
#include "stacktype.cpp"
using namespace std;

int main(){

    StackType<char> st;
    string str;
    cin >> str;

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='('){
            st.Push(str[i]);
        }
        try{
            if(str[i]==')'){
                st.Pop();
            }
        }catch(EmptyStack e){
            cout << "Unbalanced" << endl;
            return 0;
        }

    }
    if(st.IsEmpty())
        cout << "Balanced" << endl;
    else
        cout << "Unbalanced" << endl;

    return 0;
}
