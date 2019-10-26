#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include "studentInfo.h"
#include "studentInfo.cpp"
using namespace std;

int main(){

    studentInfo s1(15234,"Jon",2.6),s2(13732,"Tyrion",3.9),
        s3(13569,"Sandor",1.2),s4(15467,"Ramsey2",3.1),
        s5(16285,"Arya",3.1);

    UnsortedType<studentInfo> ut;
    ut.InsertItem(s1);

    return 0;
}
