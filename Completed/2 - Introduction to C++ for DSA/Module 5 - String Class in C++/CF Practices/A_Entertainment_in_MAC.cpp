#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string copyString = s;
    reverse(copyString.begin(), copyString.end());
    string merge = copyString + s;
    int res = s.compare(merge);

    if(res < 0)
    {
        cout << s << endl;
    }
    else if(res > 0)
    {
        cout << merge << endl;
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