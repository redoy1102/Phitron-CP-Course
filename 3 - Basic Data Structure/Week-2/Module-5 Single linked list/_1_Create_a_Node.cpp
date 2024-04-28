#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int value;
        Node *next;
};
// void solve(){
    
// }
int main(){
    Node a, b;
    a.value = 10;
    b.value = 30;
    a.next = &b;
    b.next = NULL;

    cout << (*a.next).value;

    int t;
    // cin >> t;
    t = 1;
    // while(t--){
    //     solve();
    // }

    return 0;
}