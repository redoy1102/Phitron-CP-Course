#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    // string::iterator it;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
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