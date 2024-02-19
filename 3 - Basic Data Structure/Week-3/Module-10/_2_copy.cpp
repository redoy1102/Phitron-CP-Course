#include<bits/stdc++.h>
using namespace std;
void solve(){
    list<int> l = {1, 2, 3};
    list<int> cL(l);
    cout << cL.size();
}
void list_with_array(){
    int nums[5] = {1, 2, 3, 4, 5};
    
    list<int> n(nums, nums + 5);
    for(int i:n){
        cout << i << endl;
    }
}
void list_with_vector(){
    vector<int> v = {7, 8, 9};
    list<int> l(v.begin(), v.end());
    
    for(int i : l){
        cout << i << endl;
    }
}

int main(){
    int t;
    // cin >> t;
    t = 1;
    while(t--){
        // solve();
        // list_with_array();
        list_with_vector();
    }

    return 0;
}