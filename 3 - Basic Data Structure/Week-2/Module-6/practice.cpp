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
    while (temp!=NULL)
    {
        cout << temp->v << " ";
        temp = temp->next;
    }
    
}
int main(){
    Node *head = NULL;
    

    print_linked_list(head);

    return 0;
}