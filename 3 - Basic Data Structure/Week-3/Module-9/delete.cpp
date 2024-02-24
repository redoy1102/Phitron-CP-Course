#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node *next;
    Node *pre;
    Node(int value){
        this->value = value;
        this->next = NULL;
        this->pre = NULL;
    }
};
void insert_at_any_pos(Node *&head, int s){
    int p;
    cin >> p;
    if(p>=s){
        cout << "Invalid position" << endl;
        return;
    }
    int v;
    cin >> v;
    Node *nd = new Node(v);

    Node *temp = head;
    for (int i = 1; i <= p - 1; i++){
        temp = temp->next;
    }
    nd->next = temp->next;
    temp->next = nd;
    nd->pre = temp;
    nd->next->pre = nd;
}
int size(Node *head){
    Node *temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void right_print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
}
void delete_head(Node *&head, Node *&tail){
    Node *dh = head;
    head=head->next;
    delete dh;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->pre = NULL;
}

void delete_linked(Node *&head, Node *&tail, int p){
    if(p==0)
    {
        delete_head(head, tail);
    }
}
int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->pre = head;
    a->next = b;
    b->pre = a;

    insert_at_any_pos(head, size(head));
    right_print(head);

    return 0;
}