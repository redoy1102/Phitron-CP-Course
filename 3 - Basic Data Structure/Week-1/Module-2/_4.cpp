#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v={1,2,3,4,2,2,9,5,2,3,6,8,7,4,2,5};
    // replace(v.begin(), v.end()-7, 2, 100);
    
    // for(int i : v)
    // {
    //     cout << i << " ";
    // }

    vector<int> v={1,2,3,4,2,6,8,7,4,2,5,100};
    // vector<int> :: iterator it;
    auto it = find(v.begin(), v.end(), 100);
    // cout << *it << endl;
    if(it == v.end())
    {
        cout << "Not found" << endl;
    }
    else{
        cout << "Found" << endl;
    }
    
    return 0;
}