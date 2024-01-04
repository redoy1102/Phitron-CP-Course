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

    for (int i = 0; i < n; i++)
    {
        if(v[i] < 0){
            v[i] = 2;
        }
        else if(v[i] > 0){
            v[i] = 1;
        }
    }
    for(int i : v)
        cout << i << " ";
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