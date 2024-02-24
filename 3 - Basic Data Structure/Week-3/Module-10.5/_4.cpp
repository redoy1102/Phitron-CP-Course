#include<bits/stdc++.h>
using namespace std;
void print_reverse(list<int> nums)
{
    auto front = nums.begin();
    auto back = prev(nums.end());
    while(front != back)
    {
        cout << *back << " ";
        back--;
    }
    cout << *front << endl;
}
void print(list<int> nums)
{
    for(int i: nums)
    {
        cout << i << " ";
    }
    cout << endl;
    // print_reverse(nums);
    nums.reverse();
    for(int i: nums)
    {
        cout << i << " ";
    }
    cout << endl;
}
void insert(list<int> &nums, int v, int i)
{
    if(i == 0)
    {
        nums.push_front(v);
        print(nums);
    }
    else if(i == nums.size())
    {
        nums.push_back(v);
        print(nums);
    }
    else if(i > nums.size())
    {
        cout << "Invalid" << endl;
    }
    else{
        nums.insert(next(nums.begin(), i), v);
        print(nums);
    }

}
void solve(){
    list<int> nums;
    int q, v, i;
    cin >> q;
    while(q--)
    {
        cin >> i >> v;
        // cout << nums.size();
        insert(nums, v, i);
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