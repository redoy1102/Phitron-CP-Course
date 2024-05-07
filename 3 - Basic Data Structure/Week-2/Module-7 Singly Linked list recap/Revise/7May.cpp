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
void input(Node *&head)
{
    while(1)
    {
        int value;
        cin >> value;
        if(value != -1)
        {
            Node *newNode = new Node(value);
            if(head==NULL)
            {
                head = newNode;
            }
            else{
                Node *temp = head;
                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
        else{
            break;
        }
    }
}
void output(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
void deleteHead(Node *&head)
{
    Node *d = head;
    head = head->next;
    delete d;
}
void solve()
{
    Node *head = NULL;
    input(head);
    output(head);
    cout << endl;
    deleteHead (head);
    output(head);
    
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