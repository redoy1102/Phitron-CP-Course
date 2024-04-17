#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    char sec;
    int cls, id;
    int eng_marks, math_marks;
};
bool cmp(Student a, Student b)
{
    if (a.eng_marks != b.eng_marks)
    {
        return a.eng_marks > b.eng_marks;
    }
    else if (a.math_marks != b.math_marks)
    {
        return a.math_marks > b.math_marks;
    }
    else
    {
        return a.id < b.id;
    }
}

void solve()
{
    int n;
    cin>>n;
    
    Student s[n];
    for(int i=0; i < n; i++)
    {
        cin>>s[i].name;
        cin>>s[i].cls;
        cin>>s[i].sec;
        cin>>s[i].id;
        cin>>s[i].math_marks;
        cin>>s[i].eng_marks;
    }
    
    sort(s, s+n, cmp);
    
    // Output
    for(int i=0; i < n; i++)
    {
        cout<<s[i].name<<" ";
        cout<<s[i].cls<<" ";
        cout<<s[i].sec<<" ";
        cout<<s[i].id<<" ";
        cout<<s[i].math_marks<<" ";
        cout<<s[i].eng_marks<<endl;
    }
}

int main()
{
    int t;
    // cin>>t;
    t = 1;
    while(t--)
    {
        solve();
    }
    return 0;
}
