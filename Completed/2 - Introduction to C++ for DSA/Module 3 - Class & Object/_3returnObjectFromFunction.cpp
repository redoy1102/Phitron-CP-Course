#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student fun()
{
    Student st(1, 1, 4.00);
    return st;
}

int main(){
    Student res = fun();
    cout<<res.roll;
    return 0;
}