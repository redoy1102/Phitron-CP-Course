#include<bits/stdc++.h>
using namespace std;
int *sort_it(int n){
    int *nums = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums, nums + n, greater<int>());

    return nums;
}
int main(){
    int n;
    cin >> n;

    int *sorted = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        cout << sorted[i] << " ";
    }
    
    return 0;
}