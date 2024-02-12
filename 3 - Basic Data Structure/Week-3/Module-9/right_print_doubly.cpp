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
void right_print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->v << " ";
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

    right_print(head);

    return 0;
}