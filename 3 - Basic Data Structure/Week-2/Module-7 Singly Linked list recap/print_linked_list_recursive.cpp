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

void insert_at_tail(Node *&head, Node *&tail, int v){
    Node *nd = new Node(v);
    if(head == NULL){
        head = nd;
        tail = nd;
        return;
    }
    tail->next = nd;
    tail = nd;
}
void print_linked_list(Node *head){
    if(head == NULL)
        return;
    cout << head->v << " ";
    print_linked_list(head->next);
}

void solve(){
    Node *head = NULL;
    Node *tail = NULL;

    while(true){
        int v;
        cin >> v;
        if(v != -1)
            insert_at_tail(head, tail, v);
        else
            break;
    }
    print_linked_list(head);
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