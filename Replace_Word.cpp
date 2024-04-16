#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;
void solve()
{
    string s, x;
    cin >> s >> x;

    if(x.size() <= s.size())
    {
        int index = 0;
        while((index = s.find(x, index)) != -1)
        {
            s.replace(index, x.size(), "#");
            index += 1;
        }
        cout << s << endl;
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