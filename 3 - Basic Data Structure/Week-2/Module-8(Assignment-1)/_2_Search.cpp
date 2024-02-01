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

void search(Node *head, int x){
    int index = 0;
    Node *temp = head;

    while(temp != NULL){
        if(temp->v == x){
            cout << index << endl;
            return;
        }
        index++;
        temp = temp->next;
    }
    cout << "-1" << endl;
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
    int x;
    cin >> x;
    search(head, x);

    // print_linked_list(head);
}
int main(){
    int t;
    cin >> t;
    // t = 1;
    while(t--){
        solve();
    }

    return 0;
}