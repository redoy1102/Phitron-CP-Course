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
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Values of the node: ";
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insert(Node *&head)
{
    cout<<"Enter the new value: ";
    int value;  cin>>value;
    Node *newNode = new Node(value);

    if(head == NULL)    head = newNode;
    else{
        Node *temp = head;
        while(temp->next != NULL)   temp = temp->next, temp->next=newNode;
    }

}

void solve()
{
    Node *head = NULL;

    while(true)
    {
        cout<<"Choose your option: "<<endl;
        cout<<"1 for print"<<endl;
        cout<<"2 for insert at tail"<<endl;
        cout<<"0 for break"<<endl;

        int opt;    cin>>opt;

        if(opt==1)  print(head);
        else if(opt==2)     insert(head);
        else    break;
    }
}
int main()
{
    int t;
    // cin >> t;
    t = 1;
    while(t--)  solve();

    return 0;
}