#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, s;
    cin >> n >> s;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    bool flag = false;
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(nums[i]+nums[j]+nums[k] == s)
                {
                    flag = true;
                    break;
                }
            }
        }
    }

    if(flag==true)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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