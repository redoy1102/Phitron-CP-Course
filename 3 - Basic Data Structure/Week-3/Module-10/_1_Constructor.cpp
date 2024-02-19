#include<bits/stdc++.h>
using namespace std;
void solve(){
    // list<int> l;
    // cout << l.size();

    list<int> l(2, 5);
    // cout << l.size();
    for (auto i = l.begin(); i != l.end();i++)
    {
        cout << *i << endl;
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