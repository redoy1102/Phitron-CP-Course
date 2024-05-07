#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int x, n;
    cin >> x >> n;
    ll sum = 0;
    ll m = 1;

    for(int i = 2; i <= n; i += 2)
    {
      for(int j=1; j<=i; j++)
      {
        m *= x;
      }
      sum += m;
      m = 1;
      // sum += pow(x*1.0, i*1.0);
    }

    cout << sum << endl;
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