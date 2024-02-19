#include<bits/stdc++.h>
using namespace std;
void print(list<int> nums){
    for(int i: nums){
        cout << i << " ";
    }
}

void find_p(){
    list<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    auto it = find(v.begin(), v.end(), 40);

    if(it==v.end())
    {
        cout << *it << endl;
        cout << "Not found" << endl;
    }
    else
    {
        cout << *it << endl;
    }

    print(v);
}

void delete_p(){
    list<int> nums = {1, 2, 3};
    // nums.erase(next(nums.begin(), 2));
    nums.push_back(4);
    nums.push_back(5);
    // nums.erase(next(nums.begin(), 2), next(nums.begin(), 5));

    replace(next(nums.begin()), nums.end(), 2, 5);
    print(nums);
}

void insert_practice(){
    list<int> num = {1, 2, 3, 4, 5};
    num.insert(next(num.begin(), 2), 100);
    print(num);
}

void solve(){
    int size = 10;
    list<int> l;
    while(size--)
    {
        int v;
        cin >> v;
        l.push_back(v);
    }
    l.push_front(0);
    l.pop_back();

    print(l);
}

int main(){
    int t;
    // cin >> t;
    t = 1;
    while(t--){
        // solve();
        // insert_practice();
        delete_p();
        // find_p();
    }

    return 0;
}