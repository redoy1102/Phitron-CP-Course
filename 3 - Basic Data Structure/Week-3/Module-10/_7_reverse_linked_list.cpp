#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int v;
        Node *next;
        Node(int v){
            this->v = v;
            this->next = NULL;
        }
};

void reverse(Node *&head, Node *cur){
    if(cur->next==NULL){
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->v << " ";
        temp = temp->next;
    }
}
void solve(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    
    //connections
    head->next = a;
    a->next = b;

    reverse(head, head);
    print(head);
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