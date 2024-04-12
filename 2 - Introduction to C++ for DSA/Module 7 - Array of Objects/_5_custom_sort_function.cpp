#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll, marks;
};
// compare function
bool cmp(Student a, Student b)
{
    // ascending sort
    return a.marks <= b.marks;

    // // descending sort
    // return a.marks >= b.marks;
}

int main(){
    int size;
    cin >> size;
    Student s[size];
    for (int i = 0; i < size; i++)
    {
        cin.ignore();
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].marks;
    }

    sort(s, s + size, cmp);

    for (int i = 0; i < size; i++)
    {
        cout << s[i].name << endl;
        cout << s[i].roll << endl;
        cout << s[i].marks << endl
             << endl
             << endl;
    }
    
    return 0;
}