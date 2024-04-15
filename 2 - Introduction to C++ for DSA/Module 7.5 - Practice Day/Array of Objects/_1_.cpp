#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{
    if(a.marks != b.marks)
    {
        return a.marks >= b.marks;
    }
    else{
        return a.roll <= b.roll;
    }
}
void solve()
{
    int n;
    cin >> n;
    Student s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name;
        cin >> s[i].roll;
        cin >> s[i].marks;
    }
    sort(s, s + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }
}
int main()
{
    int t;
    // cin >> t;
    t = 1;
    while(t--)
    {
        solve();
    }

    return 0;
}