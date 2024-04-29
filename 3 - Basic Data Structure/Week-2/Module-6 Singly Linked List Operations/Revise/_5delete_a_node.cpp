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
        this->value=value;
        this->next=NULL;
    }
};

void insert_at_tail(Node *&head)
{
    int v;  cin>>v;
    Node *newNode = new Node(v);

    if(head==NULL)
    {
        head = newNode;
        return;
    }
    Node *temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    cout<<v<<" is added in tail"<<endl;
}
void print(Node *head)
{
    cout<<"Values of the list: ";
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next=head;
    head=newNode;
}
void insert_at_any(Node *&head)
{
    cout<<"Enter the value: ";
    int v;  cin>>v;
    Node *newNode = new Node(v);

    cout<<"Enter the index number: ";
    int index;  cin>>index;

    if(index == 0)
    {
        insert_at_head(head, v);
        return;
    }

    Node *temp=head;
    index--;
    while(index--)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<v<<" is added."<<endl;
}
void delete_at_pos(Node *&head, int p)
{
    Node *temp=head;
    p--;
    while(p--)
    {
        temp=temp->next;
    }
    Node *d = temp->next;
    temp->next=temp->next->next;
    delete d;
}

void solve()
{
    Node *head = NULL;
    while(true)
    {
        cout<<"1 for print."<<endl;
        cout<<"2 for insert at tail"<<endl;
        cout<<"3 for insert at any"<<endl;
        cout<<"4 for insert at head."<<endl;
        cout<<"5 for delete a node."<<endl;
        cout<<"0 for break"<<endl;
        cout<<"Choose your option: ";
        int opt;    cin>>opt;
        if(opt==1)  print(head);
        else if(opt==2) insert_at_tail(head);
        else if(opt==3) insert_at_any(head);
        else if(opt==4){
            int value; cin>>value;
            insert_at_head(head, value);
        }
        else if(opt==5)
        {
            int p;
            cout<<"Enter the position to delete: ";
            cin>>p;
            delete_at_pos(head, p);
        }
        
        else    break;
    }
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