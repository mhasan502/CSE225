#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timeStamp{
    private:
        int s;
        int m;
        int h;
    public:
        timeStamp();
        timeStamp(int,int,int);
        bool operator ==(timeStamp);
        bool operator !=(timeStamp);
        bool operator > (timeStamp);
        bool operator < (timeStamp);
        friend ostream& operator << (ostream&, timeStamp&);

};
#endif // TIMESTAMP_H_INCLUDED
