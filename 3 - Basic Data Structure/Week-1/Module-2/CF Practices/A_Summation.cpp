#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    long long sum=0;
    for(int i: v)
    {
        sum+=i;
    }
    if(sum<0)
        cout<<sum*(-1)<<endl;
    else
        cout<<sum<<endl;
    
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