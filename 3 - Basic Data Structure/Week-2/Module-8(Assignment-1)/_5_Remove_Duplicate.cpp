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
void insert_at_tail(Node *&head, Node *&tail, int v){
    Node *nd = new Node(v);
    if(head==NULL){
        head = nd;
        tail = nd;
        return;
    }
    tail->next = nd;
    tail = nd;
}

int size(Node *head){
    int c = 0;
    Node *t = head;
    while(t!=NULL){
        c++;
        t = t->next;
    }
    return c;
}

void takeinput(Node *&head, Node *&tail){
    while(true){
        int v;
        cin >> v;
        if(v != -1){
            insert_at_tail(head, tail, v);
        }
        else{
            break;
        }
    }
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->v << " ";
        temp = temp->next;
    }
    cout << endl;
}

void remove_duplicate(Node *&head){
    for (Node *t = head; t != NULL; t = t->next){
        for (Node *j = t; j->next != NULL;){
            if (t->v == j->next->v){
                Node *temp = j->next;
                j->next = j->next->next;
                delete temp;
            }
            else{
                j = j->next;
            }
        }
    }
}

void solve(){
    Node *head = NULL;
    Node *tail = NULL;

    takeinput(head, tail);
    remove_duplicate(head);
    print(head);
}
int main(){
    int t;
    // cin >> t;
    t = 1;
    while(t--){
        solve();
    }

    return 0;
}