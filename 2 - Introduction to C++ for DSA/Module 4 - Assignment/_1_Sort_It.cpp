#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums, nums + n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    sort(nums, nums + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
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