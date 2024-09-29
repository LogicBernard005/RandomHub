#include <iostream>
using namespace std;
class Student{
    int id;
    string name;
    int m1, m2, m3;
    void getMarks(){
        cin>>id>>m1>>m2>>m3;
        cin>>name;
    }
    // friend void Result :: result (Student obj); 
    friend class Result;
};
class Result {
    int tm;
    public:
    void result(Student obj);
};
void Result :: result(Student obj){
    tm = obj.m1 + obj.m2 + obj.m3;
    cout << "Name: "<<obj.name<<endl;
    cout << "ID: "<<obj.id<<endl;
    cout << "Total Marks: "<<tm<<endl;
}
int main()
{
    Student s;
    Result r;
    r.result(s);
    return 0;
}