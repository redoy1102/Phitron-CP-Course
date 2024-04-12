#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll, marks;
};
bool cmp(Student a, Student b)
{
    if (a.marks==b.marks)
    {
        return a.roll < b.roll;
    }
    else{
        return a.marks > b.marks;
    }
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
    // for (int i = 0; i < size-1; i++)
    // {
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if(s[i].marks < s[j].marks)
    //         {
    //             swap(s[i], s[j]);
    //         }
    //         else if(s[i].marks == s[j].marks)
    //         {
    //             if(s[i].roll > s[j].roll)
    //             {
    //                 swap(s[i], s[j]);
    //             }
    //         }
    //     }
    // }
    
    // normal selection sort algorithm
    // for (int i = 0; i < size-1; i++)
    // {
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if(s[i].marks > s[j].marks)
    //         {
    //             swap(s[i], s[j]);
    //         }
    //     }
    // }

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