#include<bits/stdc++.h>
using namespace std;
void fun(int *&p){
    // a = NULL;
    // cout << a << endl;
    *p = 20;
}
void solve(){
    int num=10;
    int *p = &num;
    // cout << num << endl;
    // cout << p << endl;
    fun(p);
    cout << num << endl;
    cout << p << endl;
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