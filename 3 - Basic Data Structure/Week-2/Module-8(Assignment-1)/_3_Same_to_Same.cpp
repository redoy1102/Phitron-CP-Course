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

void solve(){
    Node *head = NULL;
    Node *tail = NULL;

    Node *head1 = NULL;
    Node *tail1 = NULL;

    int s1 = takeinput(head, tail);
    int s2 = takeinput(head1, tail1);

    if(s1 != s2){
        cout << "NO" << endl;
        return;
    }

    Node *temp = head;
    Node *temp1 = head1;
    while(temp != NULL){
        if(temp->v != temp1->v){
            cout << "NO" << endl;
            return;
        }
        temp = temp->next;
        temp1 = temp1->next;
    }
    cout << "YES" << endl;
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