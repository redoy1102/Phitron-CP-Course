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
    vector<long long> p(n);
    p[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = p[i - 1] + v[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << p[i] << " ";
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