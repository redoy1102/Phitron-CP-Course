#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int value;
        Node *next;
        Node(int value){
            this->value = value;
            this->next = NULL;
        }
};
// void solve(){
    
// }
int main(){
    Node a(10), b(20);
    a.next = &b;
    cout << a.value << endl << a.next->value;

    int t;
    // cin >> t;
    t = 1;
    // while(t--){
    //     solve();
    // }

    return 0;
}