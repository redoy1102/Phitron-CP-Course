#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    string word;
    bool b = false;
    while(ss >> word)
    {
        if(word == "Jessica")
        {
            b = true;
            break;
        }
    }
    if(b)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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