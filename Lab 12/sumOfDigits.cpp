#include <iostream>
using namespace std;

int sumOfDigits(int x){
    if(x==0)
        return 0;
    else
        return x+sumOfDigits(x-1);
}

int main(){
    int n;
    cin >> n;
    cout << sumOfDigits(n) << endl;
    return 0;
}
