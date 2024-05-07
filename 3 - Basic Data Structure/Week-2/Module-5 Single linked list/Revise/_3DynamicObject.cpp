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

    a->next = b;
    b->next = c;

    cout << a->v << " " << a->next->v << " " << a->next->next->v << endl;
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