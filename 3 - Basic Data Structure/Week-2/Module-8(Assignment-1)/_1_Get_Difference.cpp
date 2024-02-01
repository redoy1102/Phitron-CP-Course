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

void insert(Node *&head, Node *&tail, int v){
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
    Node *t = head;
    while(t != NULL){
        cout << t->v << " ";
        t = t->next;
    }
}

void solve(){
    Node *head = NULL;
    Node *tail = NULL;

    while(true){
        int v;
        cin >> v;
        if(v != -1){
            insert(head, tail, v);
        }
        else{
            break;
        }
    }
    Node *temp = head;
    int mx = temp->v;
    int mn = temp->v;

    for (Node *t = temp->next; t != NULL; t=t->next){
        if(t->v > mx){
            mx = t->v;
        }
        if(t->v < mn){
            mn = t->v;
        }
    }
    cout << mx - mn << endl;
    // print_linked_list(head);
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