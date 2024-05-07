#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;

class Node
{
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
    Node a(10);
    Node b(20);
    Node c(30);

    // Connections
    a.next = &b;
    b.next = &c;

    cout << a.v << endl;
    cout << a.next->v << endl;
    cout << a.next->next->v << endl;
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