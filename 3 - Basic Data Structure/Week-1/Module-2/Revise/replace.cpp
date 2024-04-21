#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;

void solve()
{
    vector<int> v = {1, 4, 5, 6, 9, 8, 8, 7, 4, 4, 4, 4, 2, 2, 2, 2};
    // replace(v.begin(), v.end(), 4, 100);
    replace(v.begin(), v.end() - 5, 4, 100);
    for(int i: v)
    {
        cout << i << " ";
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