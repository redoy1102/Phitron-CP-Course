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

int takeinput(Node *&head, Node *&tail){
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
    return size(head);
}

void insert_at_head(Node *&head, Node *&tail, int v){
    Node *nd = new Node(v);

    if(head==NULL){
        head = nd;
        tail = nd;
    }
    else{
        nd->next = head;
        head = nd;
    }
}

void delete_pos(Node *&head, Node *&tail, int v, int s){
    Node *temp = head;
    for (int i = 1; i <= v - 1; i++){
        temp = temp->next;
    }
    Node *d = temp->next;
    temp->next = temp->next->next;
    if(v == (s-1)){
        tail = temp;
    }
    delete d;
}
void delete_head(Node *&head){
    if(head == NULL){
        return;
    }
    Node *d = head;
    head = head->next;
    delete d;
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->v << " ";
        temp = temp->next;
    }
    cout << endl;
}
void solve(){
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while(q--){
        int x, v;
        cin >> x >> v;
        
        if(x==0){
            insert_at_head(head, tail, v);
            print(head);
        }
        else if(x==1){
            insert_at_tail(head, tail, v);
            print(head);
        }
        else if(x==2){
            if(v==0){
                delete_head(head);
                print(head);
            }
            else{
                int s = size(head);
                if(v >= s){
                    print(head);
                }
                else{
                    delete_pos(head, tail, v, s);
                    print(head);
                }
            }
        }
    }
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