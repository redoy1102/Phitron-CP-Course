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
void insert_head(Node *&head, int v){
    Node *nd = new Node(v);
    if(head==NULL){
        head = nd;
        return;
    }
    nd->next = head;
    head->pre = nd;
    head = nd;
}
void insert_at_any_pos(Node *&head, int s){
    int p;
    cin >> p;
    int v;
    cin >> v;
    if(p==0){
        insert_head(head, v);
        return;
    }
    else if(p>=s){
        cout << "Invalid position" << endl;
        return;
    }
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