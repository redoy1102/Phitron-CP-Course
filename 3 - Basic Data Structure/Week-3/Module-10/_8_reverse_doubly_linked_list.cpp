#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int v;
        Node *next;
        Node *pre;
        Node(int v){
            this->v = v;
            this->next = NULL;
            this->pre = NULL;
        }
};

void input(Node *&head, Node *&tail, int v){
    Node *nd = new Node(v);
    if(head==NULL){
        head = nd;
        tail = nd;
        return;
    }
    tail->next = nd;
    nd->pre = tail;
    tail = tail->next;
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->v << " ";
        temp = temp->next;
    }
}

void reverse(Node *head, Node *tail){
    Node *i = head;
    Node *j = tail;
    while(i != j && i->next != j){
        swap(i->v, j->v);
        i = i->next;
        j = j->pre;
    }
}
void solve(){
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
        int v;
        cin >> v;
        if(v != -1)
        {
            input(head, tail, v);
        }
        else{
            break;
        }
    }
    reverse(head, tail);
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