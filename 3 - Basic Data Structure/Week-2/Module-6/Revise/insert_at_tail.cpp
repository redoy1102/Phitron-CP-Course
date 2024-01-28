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
void print_linked_list(Node *head){
    Node *temp = head;
    cout << "\nLinked list: ";
    while(temp!=NULL){
        cout << temp->v << " ";
        temp = temp->next;
    }
    cout << "\n\n";
}
void insert_at_tail(Node *&head, int v){
    Node *newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void insert_at_any_pos(Node *&head, int v, int p){
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i <= p - 1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void insert_at_head(Node *&head, int v){
    Node *nd = new Node(v);
    nd->next = head;
    head = nd;
    cout << endl
         << "Head inserted" << endl
         << endl;
}
void delete_position(Node *&head, int p){
    Node *temp = head;
    for (int i = 1; i <= p - 1; i++){
        temp = temp->next;
    }
    Node *del = temp->next;
    temp->next = temp->next->next;
    delete del;
    cout << endl
         << "Deleted" << endl
         << endl;
}
void delete_head(Node *&head){
    Node *dh = head;
    head = head->next;
    delete dh;
}

int main(){
    Node *head = NULL;
    while (true)
    {
        cout << "Press-1 for print the linked list.\n";
        cout << "Press-2 for insert at tail\n";
        cout << "Press-3 to insert at any position.\n";
        cout << "Press-4 to insert at head.\n";
        cout << "Press-5 to delete a node.\n";
        cout << "Press-6 to delete the head\n";
        cout << "Press-0 for stop.\n";
        int opt;
        cout << "Press Now = ";
        cin >> opt;

        if(opt==1){
            print_linked_list(head);
        }
        else if(opt==2){
            int v;
            cout << "Enter a value: ";
            cin >> v;
            cout << "\n";
            insert_at_tail(head, v);
        }
        else if(opt==3){
            int v;
            cout << "Enter a value: ";
            cin >> v;
            int p;
            cout << "Enter the index number: ";
            cin >> p;
            if(p==0){
                insert_at_head(head, v);
            }
            else{
                cout << "\n";
                insert_at_any_pos(head, v, p);
            }
        }
        else if(opt==4){
            int v;
            cout << "Enter a value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if(opt == 5){
            int p;
            cout << "Enter the index number: ";
            cin >> p;
            if(p==0){
                delete_head(head);
            }
            else{
                delete_position(head, p);
            }
        }
        else if(opt == 6)
        {
            delete_head(head);
        }
        else{
            break;
        }
    }

    return 0;
}