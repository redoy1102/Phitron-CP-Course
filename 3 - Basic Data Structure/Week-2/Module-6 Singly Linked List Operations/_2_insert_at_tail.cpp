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
void insert_at_tail(Node *&head, int value){
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        cout << "\nInserted as head!\n" << endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << "\nInserted!\n" << endl;
}
void print_linked_list(Node *head){
    Node *temp = head;
    while (temp!=NULL)
    {
        cout << temp->v << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insert_at_any_position(Node *head, int pos, int v){
    Node *newNode = new Node(v);

    Node *temp = head;
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "\nInserted " << v << " at position " << pos << endl
         << endl;
}
int main(){
    Node *head = NULL;
    while (true)
    {
        cout << "1. Insert a node in tail." << endl;
        cout << "2. Print node." << endl;
        cout << "3. Insert at any position." << endl;
        cout << "4. Break" << endl;
        cout << "Enter your option: ";
        int op;
        cin >> op;
        if(op==1){
            cout << "Enter your value: ";
            int value;
            cin >> value;
            insert_at_tail(head, value);
        }
        else if(op==2){
            print_linked_list(head);
        }
        else if(op==3){
            cout << "Enter your position: ";
            int pos;
            cin >> pos;
            cout << "Enter the value: ";
            int v;
            cin >> v;
            insert_at_any_position(head, pos, v);
        }
        else{
            break;
        }
    }
    
    return 0;
}