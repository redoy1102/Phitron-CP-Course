#include<bits/stdc++.h>
using namespace std;
string built_in(string& s)
{
    reverse(s.begin(), s.end());
    return s;
}
string manual(string s)
{
    int len = s.length();
    string r;
    for (int i = len-1; i >= 0; i--)
    {
        r.push_back(s[i]);
    }
    return r;
}
void solve(){
    string s;
    cin >> s;
    // cout << built_in(s);
    cout << manual(s);
}
int main(){
    int t;
    // cin >> t;
    t = 1;
    while(t--){
        solve();
    }

    return 0;
}