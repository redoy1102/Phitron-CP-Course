#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll, marks;
};

int main(){
    Student s, a;
    s.name = "Fuad";
    s.roll = 123;
    s.marks = 100;
    a = s;
    cout << a.name << endl;

    return 0;
}