#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[50];
    char email[30];
    int number;
    double cgpa;
};
int main(){
    Student obj, obj1;
    char name[50] = "MD Fuadul Islam Redoy";
    strcpy(obj.name, name);
    char email[30] = "20103046@iubat.edu";
    strcpy(obj.email, email);
    obj.number = 10;
    obj.cgpa = 3.30;
    cout<<obj.name<<endl;


    cin.getline(obj1.name, 50);
    cout<<obj1.name;

    return 0;
}