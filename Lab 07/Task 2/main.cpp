#include <iostream>
#include "quetype.cpp"
using namespace std;

int main(){

    QueType<string> qt;
    int n;
    string var;
    cin >> n;

    qt.Enqueue("1");
    while(n--){
        qt.Dequeue(var);
        string s1 = var;
        cout << s1 << endl;
        string s2 = s1;
        qt.Enqueue(s1.append("0"));
        qt.Enqueue(s2.append("1"));
    }

    return 0;
}
