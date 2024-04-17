#include <bits/stdc++.h>

using namespace std;
class Student{
    public:
    string name;
    char sec;
    int cls, id;
};

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
      
    }
    
    int i = 0, j = n-1;
    while(i <= j)
    {
        swap(s[i].sec, s[j].sec);
        i++;
        j--;
    }
    
    for(int i=0; i < n; i++)
    {
        cout<<s[i].name<<" ";
        cout<<s[i].cls<<" ";
        cout<<s[i].sec<<" ";
        cout<<s[i].id<<" "<<endl;
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
