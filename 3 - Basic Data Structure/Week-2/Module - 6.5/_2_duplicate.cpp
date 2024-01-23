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
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void size(Node *head){
    Node *temp=head;
    int nums[100] = {0};

    while(temp != NULL){
        int n = temp->v;
        nums[n]++;
        // cout << temp->v << " ";
        temp = temp->next;
    }
    for (int i = 0; i < 100; i++)
    {
        // cout << nums[i] << " ";
        if(nums[i] == 2){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main(){
    Node *head = NULL;
    int v;
    while(true){
        cin >> v;
        if(v==-1){
            break;
        }
        else{
            insert_at_tail(head, v);
        }
    }
    size(head);

    return 0;
}