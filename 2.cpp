#include<iostream>
using namespace std;

class student{
    string name;
    int rollno;
    static int studentcount;
    public:
    student(){
        cout<<"default constructor";
        studentcount++;
    }
    student(string name,int rollno){
        this->name=name;
        this->rollno=rollno;
        studentcount++;
    }
    student(student &obj){
        name=obj.name;
        rollno=obj.rollno;
        studentcount++
    }
    ~student(){
        studentcount--;
        cout<<"destructor called"
    }
};
int student::studentcount=0;
int main(){
    int n=4;
    student *classroom=new student[n];
 return 0;
}