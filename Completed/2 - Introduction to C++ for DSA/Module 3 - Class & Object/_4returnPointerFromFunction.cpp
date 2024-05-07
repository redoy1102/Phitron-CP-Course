#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    Student(int roll, int cls){
        this->roll = roll;
        this->cls = cls;
    }
};

Student *fun()
{
    Student *p = new Student(1, 2);
    return p;
}

int main(){
    Student *res = fun();
    cout<<res->roll<<endl;
    cout<<res->cls;
    delete res;

    return 0;
}