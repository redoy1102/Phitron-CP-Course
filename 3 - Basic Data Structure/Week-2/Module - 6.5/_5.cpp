/*
    Take a singly linked list as input and check if the linked list is sorted in ascending order.
*/
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
void insert(Node *&head, int v){
    Node *nd = new Node(v);
    if(head == NULL)
    {
        head = nd;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = nd;
}
void output(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->v << " ";
        temp = temp->next;
    }
}
int size(Node *head){
    int c = 0;
    Node *temp = head;
    while(temp != NULL){
        c++;
        temp = temp->next;
    }
    return c;
}
bool ascending(Node *head){
    Node *temp = head;
    while(temp->next->next != NULL){
        if(temp->v > temp->next->v){
            return false;
        }
        temp = temp->next;
    }
    if(temp->v > temp->next->v){
        return false;
    }
    else{
        return true;
    }
}

void solve(){
    Node *head = NULL;
    while(true){
        int v;
        cin >> v;
        if(v != -1){
            insert(head, v);
        }
        else{
            break;
        }
    }
    // output(head);
    bool res = ascending(head);
    if(res){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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