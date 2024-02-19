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
    
    int element = *next(n.begin(), 2);  // next() return pointer and used index to access
    cout << element << endl;
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