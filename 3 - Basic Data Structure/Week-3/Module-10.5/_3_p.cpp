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
void print(Node *head){
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void input(Node *&head, Node *&tail, int v){
    Node *nd = new Node(v);
    if(head == NULL)
    {
        head = nd;
        tail = nd;
        return;
    }
    tail->next = nd;
    nd->pre = tail;
    tail = tail->next;
}

bool palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while(i != j && i->next != j)
    {
        if(i->value != j->value)
        {
            return false;
        }
        i = i->next;
        j = j->pre;
    }
    if(i->value == j->value)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
        int v;
        cin >> v;
        if(v != -1)
        {
            input(head, tail, v);
        }
        else
        {
            break;
        }
    }
    // print(head);
    if(palindrome(head, tail))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}