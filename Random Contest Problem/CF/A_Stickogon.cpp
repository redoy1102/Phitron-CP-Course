#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i]; 
    }

    vector<int> fre(101, 0);
    
    for (int i = 0; i < n; i++)
    {
        fre[v[i]]++;
    }

    int totalPoly = 0;
    for(int i: fre)
    {
        totalPoly += (i/3);
    }
    cout<<totalPoly<<endl;
}

void check()
{
    cout<<2/4;
}
int main()
{
    int t;
    cin >> t;
    // t = 1;
    while(t--)
    {
        solve();
        // check();
    }

    return 0;
}