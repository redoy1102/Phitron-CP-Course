#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int v;
        Node *next;
    Node(int v){
        this->v=v;
        this->next = NULL;
    }
};
int main(){
    Node *head=new Node(10);
    Node *a = new Node(30);
    Node *b = new Node(40);
    Node *c = new Node(50);
    Node *d = new Node(60);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Node *temp = head;
    while(temp != NULL){
        cout << temp->v << " ";
        temp = temp->next;
    }

    return 0;
}