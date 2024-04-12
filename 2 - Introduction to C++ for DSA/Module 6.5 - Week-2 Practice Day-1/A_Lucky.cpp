#include<bits/stdc++.h>
using namespace std;
int sum(char a, char b, char c)
{
    int r = (a - '0') + (b - '0') + (c - '0');
    return r;
}
void solve(){
    string s;
    cin >> s;
    int left = sum(s[0], s[1], s[2]);
    int right = sum(s[3], s[4], s[5]);
    // cout << left << " " << right << endl;
    if(left == right){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main(){
    int t;
    cin >> t;
    // t = 1;
    while(t--){
        solve();
    }

    return 0;
}