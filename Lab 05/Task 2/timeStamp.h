#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timeStamp{

    public:
        timeStamp();
        timeStamp(int, int, int);
        void Tprint();
        bool operator ==(timeStamp);
    private:
        int ss;
        int mm;
        int hh;

};
#endif // TIMESTAMP_H_INCLUDED
