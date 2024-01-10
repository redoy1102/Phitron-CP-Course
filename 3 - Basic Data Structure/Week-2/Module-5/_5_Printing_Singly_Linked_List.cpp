#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node *next = NULL;
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
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    // cout << "head = " << head->value << endl;
    // cout << "a = " << head->next->value << endl;
    // cout << "b = " << head->next->next->value << endl;
    // cout << "c = " << head->next->next->next->value;
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->value<<endl;
        temp = temp->next;
    }
    cout << "Again" << endl;
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->value<<endl;
        temp = temp->next;
    }

    int t;
    // cin >> t;
    // t = 1;
    // while(t--){
    //     solve();
    // }

    return 0;
}