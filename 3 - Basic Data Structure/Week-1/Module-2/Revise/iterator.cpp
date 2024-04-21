#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;

void solve()
{
    vector<int> v = {1, 4, 5, 6, 9, 8, 8, 7, 4, 4, 4, 4, 2, 2, 2, 2};
    for (auto it = v.begin(); it < v.end(); it++)
        cout << *it << " ";
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