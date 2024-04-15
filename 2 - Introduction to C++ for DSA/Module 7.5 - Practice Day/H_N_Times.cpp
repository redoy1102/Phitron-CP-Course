#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n;
    char c;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        if(i==n-1)
            cout << c << endl;
        else
            cout << c << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    // t = 1;
    while(t--)
    {
        solve();
    }

    return 0;
}