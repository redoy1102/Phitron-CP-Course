#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s, words;
    getline(cin, s);
    int count = 0;
    stringstream ss(s);
    while(ss >> words)
    {
        count++;
    }
    cout << count << endl;
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