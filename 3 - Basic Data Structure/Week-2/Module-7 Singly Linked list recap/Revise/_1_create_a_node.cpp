#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;
class Node{
    public:
        int value;
        Node *next;
        Node(int value)
        {
            this->value = value;
            this->next = NULL;
        }
};
void input(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
        head = newNode;
    else{
        Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void print(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
void recursive(Node *head)
{
    if(head == NULL)
    {
        return;
    }
    recursive(head->next);
    cout << head->value << " ";
}
void print_before_len(Node *head)
{
    Node *temp = head;
    while(temp->next!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void solve()
{
    Node *head = NULL;
    while(1)
    {
        int v;
        cin >> v;
        if(v==-1)
            break;
        else{
            input(head, v);
        }
    }
    print(head);
    cout << endl;
    recursive(head);
    cout << endl;
    print_before_len(head);
    cout << endl;
}
int main()
{
    int t;
    // cin >> t;
    t = 1;
    while(t--)
    {
        solve();
    }

    return 0;
}