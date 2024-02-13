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
void ulta_print(Node *b){
    Node *temp = b;
    while(temp != NULL){
        cout << temp->v << " ";
        temp = temp->pre;
    }
}
int main(){
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);

    // connections
    head->next = a;
    a->pre = head;
    a->next = b;
    b->pre = a;

    ulta_print(b);
    return 0;
}