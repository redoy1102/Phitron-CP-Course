#include<bits/stdc++.h>
using namespace std;
bool palindrome(list<int>nums){
    auto front = nums.begin();
    auto back = prev(nums.end());

    while(front != back && next(front) != back)
    {
        if(*front != *back)
        {
            return false;
        }
        front++;
        back--;
    }
    if(*front == *back){
        return true;
    }
    else{
        return false;
    }
}
void solve(){
    list<int> nums;
    while(true){
        int v;
        cin >> v;
        if(v != -1)
        {
            nums.push_back(v);
        }
        else{
            break;
        }
    }
    if(palindrome(nums)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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