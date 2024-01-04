#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, q;
    cin>>n>>q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    while (q--)
    {
        int x;
        cin>>x;
        int l = 0, r = n - 1;
        bool flag = false;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(v[mid] == x){
                flag=true;
                break;
            }
            else if(x > v[mid]){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        if(flag)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
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