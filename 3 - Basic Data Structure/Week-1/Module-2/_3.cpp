#include<bits/stdc++.h>
using namespace std;
int main(){
    //! 1
    // vector<int> v={1,2,3,4,5};
    // v.insert(v.begin() + 3, 10);
    // for(int i : v){
    //     cout << i << " ";
    // }

    //! 2
    // vector<int> v={1,2,3,7};
    // vector<int> v1 = {4, 5, 6};
    // v.insert(v.begin()+3, v1.begin(), v1.end());

    // for(int i : v){
    //     cout << i << " ";
    // }

    //! 3
    // vector<int> v={1,2,3,7};
    // v.erase(v.begin() + v.size() - 1);
    // for(int i:v){
    //     cout << i<<" ";
    // }

    //! 4
    vector<int> v={1,2,3,4,5,6,7};
    v.erase(v.begin() + 2, v.begin()+5);
    for(int i:v){
        cout << i<<" ";
    }

    return 0;
}