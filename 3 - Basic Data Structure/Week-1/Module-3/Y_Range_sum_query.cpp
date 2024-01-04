#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    // prefix sum
    vector<long long> p(n);
    p[0] = v[0];
    for (int i = 1; i < p.size(); i++)
    {
        p[i] = v[i] + p[i - 1];
    }
    
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        if(l == 0){
            cout << p[r] << endl;
        }
        else{
            long long res = p[r] - p[l-1];
            cout << res << endl;
        }
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