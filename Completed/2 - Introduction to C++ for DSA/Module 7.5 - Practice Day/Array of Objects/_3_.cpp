#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;

int count(string s, string x)
{
    stringstream ss(s);
    int c = 0;
    string word;
    while(ss >> word)
    {
        if(word == x)
        {
            c++;
        }
    }
    return c;
}
void solve()
{
    string s, x;
    getline(cin, s);
    cin >> x;
    int res = count(s, x);
    cout << res << endl;
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