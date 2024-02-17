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

void insert_head(Node *&head, Node *&tail, int v){
    Node *nd = new Node(v);
    if(head==NULL){
        head = nd;
        tail = nd;
        return;
    }
    nd->next = head;
    head->pre = nd;
    head = nd;
}

void insert_tail(Node *&tail, int v){
    Node *nd = new Node(v);
    tail->next = nd;
    nd->pre = tail;
    tail = tail->next;
}

void insert_at_any_pos(Node *&head, Node *&tail, int s){
    int p;
    cout << "Enter the position: ";
    cin >> p;
    int v;
    cout << "Enter your value: ";
    cin >> v;

    if(p==0){
        insert_head(head, tail, v);
        return;
    }
    else if(p==s){
        insert_tail(tail, v);
        return;
    }
    else if(p>s){
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
    cout << endl << endl;
}

void delete_head(Node *&head){
    Node *dh = head;
    head=head->next;
    head->pre = NULL;
    delete dh;
}

void delete_tail(Node *&tail){
    Node *dt = tail;
    tail = tail->pre;
    tail->next = NULL;
    delete dt;
}

void delete_linked(Node *&head, Node*&tail, int p, int s){
    if(p>=s){
        cout << "Invalid position" << endl;
        return;
    }
    else if(p==0){
        delete_head(head);
        return;
    }
    else if(p==(s-1)){
        delete_tail(tail);
        return;
    }
    Node *t = head;
    for (int i = 1; i <= p - 1; i++){
        t = t->next;
    }
    Node *dn = t->next;
    t->next = t->next->next;
    t->next->pre = t;
    delete dn;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
        cout << "Press-1 for print." << endl;
        cout << "Press-2 for insert" << endl;
        cout << "Press-3 for delete" << endl;
        cout << "Press-5 for size" << endl;
        cout << "Press-4 for reverse" << endl << endl;

        int opt;
        cin >> opt;
        if (opt==1)
        {
            right_print(head);
        }
        else if(opt==2)
        {
            insert_at_any_pos(head, tail, size(head));
        }
        else if(opt==3){
            int p;
            cin >> p;
            delete_linked(head, tail, p, size(head));
        }
        else if(opt==5){
            cout<<size(head)<<endl;
        }
        else if(opt==-1)
        {
            break;
        }
    }

    return 0;
}