#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;
class Node{
    public:
    int v;
    Node *next;
    Node(int v)
    {
        this->v=v;
        this->next=NULL;
    }
};
void solve()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    head->next=a;
    a->next=b;

    Node *temp=head;
    while(temp != NULL)
    {
        cout<<temp->v<<" ";
        temp=temp->next;
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