#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int v;
    Node *next;
    Node *pre;
    Node(int v){
        this->v=v;
        this->next = NULL;
        this->pre = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int v){
    Node *nd = new Node(v);
    if(head==NULL){
        head=nd;
        tail = nd;
        return;
    }
    tail->next = nd;
    nd->pre = tail;
    tail = tail->next;
}

void print_linked_list(Node *head){
    Node *t = head;
    while(t != NULL){
        cout << t->v << " ";
        t = t->next;
    }
}

int main(){
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

    return 0;
}