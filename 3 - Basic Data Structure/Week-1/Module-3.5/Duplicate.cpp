#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;  cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    //! using set
    set<int> s(v.begin(), v.end());
    if(s.size() < v.size()){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    //! using vector 
    /*
    bool res = false;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        for (auto nIt = it + 1; nIt != v.end(); nIt++){
            if(*it == *nIt){
                res = true;
                break;
            }
        }
    }

    if(res){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    */
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