/*
    Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.
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

    int s = size(head);
    if(s%2 == 0)
    {
        Node *temp = head;
        for (int i = 1; i <= (s/2) - 1; i++){
            temp = temp->next;
        }
        cout << temp->v << " " << temp->next->v << endl;
    }
    else{
        Node *temp = head;
        for (int i = 1; i <= s/2; i++){
            temp = temp->next;
        }
        cout << temp->v << endl;
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