#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int even(int nums[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i] %2 == 0)
            count++;
    }
    return count;
}
int odd(int nums[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i] %2 != 0)
            count++;
    }
    return count;
}

void solve(){
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n;i++)
        cin >> nums[i];

    int totalE = even(nums, n);
    int totalO = odd(nums, n);

    if(n %2 != 0)
    {
        cout << -1 << endl;
    }
    else{
        int target = n / 2;
        int res = min(abs(totalE - target), abs(totalO - target));
        cout<<res<<endl;
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