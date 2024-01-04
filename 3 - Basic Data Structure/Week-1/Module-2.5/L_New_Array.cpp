#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    vector<int> B(n);
    for (int i = 0; i < n; i++){
        cin >> B[i];
    }

    vector<int> C;
    C.insert(C.begin(), B.begin(), B.end());
    C.insert(C.begin() + n, A.begin(), A.end());
    for(int i :C){
        cout << i << " ";
    }
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