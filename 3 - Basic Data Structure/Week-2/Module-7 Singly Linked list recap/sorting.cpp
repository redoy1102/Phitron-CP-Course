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
void sort(Node *head){
    for (Node *temp = head; temp != NULL; temp = temp->next){
        for (Node *j = temp->next; j != NULL; j=j->next){
            if(temp->v > j->v){
                swap(temp->v, j->v);
            }
        }
    }
}
void print_linked_list(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->v << " ";
        temp = temp->next;
    }
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
    sort(head);
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