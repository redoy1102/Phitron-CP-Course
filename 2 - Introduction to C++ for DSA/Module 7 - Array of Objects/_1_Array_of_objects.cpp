#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
};
int main(){
    int size;
    cout << "Enter the total students: ";
    cin >> size;
    Student s[size];
    for (int i = 0; i < size; i++)
    {
        cin.ignore();
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].marks;
    }
    // printing the output
    for (int i = 0; i < size; i++)
    {
        cout << s[i].name << endl;
        cout << s[i].roll << endl;
        cout << s[i].marks << endl;
    }
    

    return 0;
}