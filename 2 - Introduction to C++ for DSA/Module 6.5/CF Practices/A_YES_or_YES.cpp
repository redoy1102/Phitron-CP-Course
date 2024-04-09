#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    string upper;

    for(char ch: s)
    {
        char c = toupper(ch);
        upper.push_back(c);
    }

    if (upper=="YES")
    {
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