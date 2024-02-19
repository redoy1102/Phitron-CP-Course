#include<bits/stdc++.h>
using namespace std;
void solve()
{
    list<int> l(5, 1);
    // l.clear();
    l.resize(10, 2);
    for(int i:l)
    {
        cout << i << endl;
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