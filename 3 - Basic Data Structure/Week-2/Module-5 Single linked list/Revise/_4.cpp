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
            this->v = v;
            this->next = NULL;
        }
};

void solve()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;
    Node *temp = a;
    while(temp != NULL)
    {
        cout << temp->v << " ";
        temp = temp->next;
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