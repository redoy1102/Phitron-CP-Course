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
int main(){
    Student *res = new Student(1, 5);
    cout<<res->roll<<endl;
    cout<<res->cls;

    return 0;
}