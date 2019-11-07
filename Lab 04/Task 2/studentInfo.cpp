#include "studentInfo.h"

studentInfo::studentInfo(int id, string name, double cgpa){
    this->id = id;
    this->name = name;
    this->cgpa = cgpa;
}

studentInfo::studentInfo(){

}

studentInfo::studentInfo(int id){
    this->id = id;
}

bool studentInfo::operator==(studentInfo s){
    if(this->id==s.id)
        return true;
    else
        return false;
}
bool studentInfo::operator!=(studentInfo s){
    if(this->id!=s.id)
        return true;
    else
        return false;
}
ostream& operator << (ostream& os, studentInfo& student){
    os << student.id << ", " << student.name << ", " << student.cgpa << endl;
    return os;
}
