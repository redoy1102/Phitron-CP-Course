#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll, marks;
};

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
    Student min, max;
    min.marks = INT_MAX;
    max.marks = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if(s[i].marks <= min.marks)
        {
            min = s[i];
        }
        if(s[i].marks > max.marks)
        {
            max = s[i];
        }
    }
    cout << "\nThe student who got the minimum mark: " << endl;
    cout << "Name: " << min.name << endl
         << "Roll: " << min.roll << endl
         << "Marks: " << min.marks << endl;

    cout << "\n\n\nThe student who got the maximum mark: " << endl;
    cout << "Name: " << max.name << endl
         << "Roll: " << max.roll << endl
         << "Marks: " << max.marks << endl;


    return 0;
}