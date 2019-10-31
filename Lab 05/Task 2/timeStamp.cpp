#include "timeStamp.h"

timeStamp::timeStamp(){
    ss = 0;
    mm = 0;
    hh = 0;
}

timeStamp::timeStamp(int s, int m, int h){
    ss = s;
    mm = m;
    hh = h;
}
void timeStamp::Tprint(){
    cout << ss <<":"<< mm << ":" << hh <<endl;
}
bool timeStamp::operator ==(timeStamp t){
    if((ss==t.ss)&&(mm==t.mm)&&(hh==t.hh))
        return true;
    else
        return false;
}
