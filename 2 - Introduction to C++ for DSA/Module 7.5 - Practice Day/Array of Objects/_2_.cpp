#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};
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
    reverse(s, s + n);

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