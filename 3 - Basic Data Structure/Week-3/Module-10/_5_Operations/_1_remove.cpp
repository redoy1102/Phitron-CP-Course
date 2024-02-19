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
    int r;
    // cout<<"Enter the value that you want to delete: ";
    cin >> r;
    n.remove(r);
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