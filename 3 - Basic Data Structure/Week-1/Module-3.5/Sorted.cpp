#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool decision = false;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i] > v[i+1]){
            decision = true;
            break;
        }
    }
    if(decision){
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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