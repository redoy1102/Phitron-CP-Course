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
    
    int m;
    cin >> m;
    vector<int> v1(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }

    int x;
    cin >> x;
    // x--;
    v.insert(v.begin() + x, v1.begin(), v1.end());
    for(int i: v){
        cout << i << " ";
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