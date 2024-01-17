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
void insert_at_tail(Node *&head, int v){
    Node *newNode = new Node(v);
    if (head==NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_linked_list(Node *head){
    Node *temp = head;
    cout << "Linked list: ";
    while (temp!=NULL)
    {
        cout << temp->v << " ";
        temp = temp->next;
    }
    
}
int main(){
    Node *head = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v==-1)
        {
            break;
        }
        else{
            insert_at_tail(head, v);
        }
    }
    print_linked_list(head);

    return 0;
}