#include<bits/stdc++.h>
using namespace std;

int main(){
    //! 1 O(1)
    // vector<int> v;
    // cout << v.max_size();

    //! 2 O(1)
    // vector<int> v;
    // cout << v.capacity() << endl;   // 0
    // v.push_back(10);
    // cout << v.capacity() << endl;   // 1
    // v.push_back(20);
    // cout << v.capacity() << endl;   // 2
    // v.push_back(20);
    // cout << v.capacity() << endl;   // 4
    // v.push_back(20);
    // cout << v.capacity() << endl;   // 4

    //! 3 O(n)
    // vector<int> v(3, 1);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // v.clear();
    // cout << v.size() << endl;
    // cout << v[2] << endl;

    //! 4
    vector<int> v(10, 2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.resize(5);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.resize(7, 1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}