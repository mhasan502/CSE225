#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

class studentInfo{
    private:
        int id;
        string name;
        double cgpa;
    public:
        studentInfo();
        studentInfo(int);
        studentInfo(int,string,double);
        bool operator ==(studentInfo s);
        bool operator !=(studentInfo s);
        friend ostream& operator << (ostream&, studentInfo&); // just like ToString method in Java

};

#endif // STUDENTINFO_H_INCLUDED
