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
    Node *head = new Node(10);
    Node *a = new Node(20);
    head->next = a;
    cout << head->value<<endl;
    // cout << a->value;
    cout << head->next->value;

    int t;
    // cin >> t;
    t = 1;
    // while(t--){
    //     solve();
    // }

    return 0;
}