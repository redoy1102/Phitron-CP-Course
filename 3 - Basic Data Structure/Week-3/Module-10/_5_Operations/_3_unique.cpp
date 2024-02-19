#include<bits/stdc++.h>
using namespace std;

void print(list<int> n)
{
    for(int i: n){
        cout << i << " ";
    }
}

void solve(){
    list<int> n;
    int s;
    cin>>s;
    while(s--){
        int v;
        cin >> v;
        n.push_back(v);
    }
    // n.sort();    // use it if the list is not sorted
    n.unique();

    print(n);
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