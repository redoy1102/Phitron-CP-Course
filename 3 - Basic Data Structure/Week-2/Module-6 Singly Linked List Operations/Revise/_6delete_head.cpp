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

void print(Node *head)
{
    if(head == NULL)
    {
        cout<<"List is empty"<<endl<<endl;
        return;
    }
    cout<<"Values of the list: ";
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
void insert_at_tail(Node *&head)
{
    cout<<"Enter a number: ";
    int v;  cin>>v;
    Node *newNode = new Node(v);

    if(head==NULL)
    {
        head = newNode;
        cout<<v<<" is inserted"<<endl<<endl;
        return;
    }
    Node *temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    cout<<v<<" is inserted"<<endl<<endl;
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
        cout<<v<<" is inserted or head updated."<<endl<<endl;
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
    cout<<v<<" is inserted."<<endl<<endl;
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
    cout<<"Deleted"<<endl<<endl;
}
void delete_head(Node *&head)
{
    Node *dHead = head;
    head = head->next;
    delete dHead;
    cout<<"Head deleted or updated."<<endl<<endl;
}

void solve()
{
    Node *head = NULL;
    while(true)
    {
        cout<<"1 to print."<<endl;
        cout<<"2 to insert at tail"<<endl;
        cout<<"3 to insert at any"<<endl;
        cout<<"4 to insert at head."<<endl;
        cout<<"5 to delete a node."<<endl;
        cout<<"6 to delete the head"<<endl;
        cout<<"0 to break"<<endl;
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
            if(p==0)
            {
                delete_head(head);
            }
            else{
                delete_at_pos(head, p);
            }
        }
        else if(opt==6) delete_head(head);
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