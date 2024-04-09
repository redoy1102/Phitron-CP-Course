#include<bits/stdc++.h>
using namespace std;
void solve(){
    int *a = new int[3];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    // delete[] a;
    // delete a;
    free(a);
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