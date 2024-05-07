#include<bits/stdc++.h>
using namespace std;
void print_recursive(stringstream& ss)
{
    string word;
    if(ss>>word)
    {
        print_recursive(ss);
        cout << word << endl;
    }
}
void solve(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    print_recursive(ss);
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