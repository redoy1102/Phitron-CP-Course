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
    cout << "\nYour linked list: ";
    
    while (temp!=NULL)
    {
        cout << temp->v << " ";
        temp = temp->next;
    }
    cout << endl<<endl;
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
void insert_new_head(Node *&head, int num){
    Node *newNode = new Node(num);
    newNode->next = head;
    head = newNode;
    cout << "\nHead changed to value = " << num << endl
         << endl;
}
void delete_node(Node *&head, int p){
    Node *temp = head;
    // p--;
    // while(p--){
    //     temp = temp->next;
    // }
    for (int i = 1; i <= p - 1;i++){
        temp = temp->next;
    }
        Node *d = temp->next;
    temp->next = temp->next->next;
    delete d;

    cout << "Position " << p << " has been deleted" << endl
         << endl;
}
int main(){
    Node *head = NULL;
    while (true)
    {
        cout << "1. Insert a node in tail." << endl;
        cout << "2. Print node." << endl;
        cout << "3. Insert at any position." << endl;
        cout << "4. Insert new head" << endl;
        cout << "5. Delete a node" << endl;
        cout << "6. Break" << endl;
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
        else if (op==4)
        {
            int num;
            cout << "Insert the value of head: ";
            cin >> num;

            insert_new_head(head, num);
        }
        else if (op==5)
        {
            int p;
            cout << "Insert the position that you want to delete: ";
            cin >> p;

            delete_node(head, p);
        }
        else{
            break;
        }
    }
    
    return 0;
}