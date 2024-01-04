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
    
    int count = 0;

    for (int i = 0; i < v.size(); i++)
    {
        int need = v[i]+1;
        auto it = find(v.begin(), v.end(), need);
        if(it != v.end()){
            count++;
        }
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