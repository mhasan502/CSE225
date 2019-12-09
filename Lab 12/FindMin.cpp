#include <iostream>
using namespace std;

int findMin(int a[],int size){
    int min = a[0];
    for(int i=0; i<size; i++){
        if(a[i]<min)
            min = a[i];
    }
    return min;
}
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << findMin(a,10) << endl;
    return 0;
}
