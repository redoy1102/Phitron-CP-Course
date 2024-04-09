#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a;
    cin >> a;
    cout << "Value of a = " << a << endl;
    int *p;     
    p = &a;     // called reference
    cout << "Value of a using dereferencing = " << *p << endl;
    cout << "Address of a " << p << endl;
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