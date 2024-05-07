#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;

class Node
{
    public:
    int v;
    Node *next;
};

void solve()
{
    Node a, b;
    a.v = 10;
    b.v = 20;
    a.next = &b;
    b.next = NULL;

    // cout << (*a.next).v << endl;
    cout << a.next->v << endl;
    cout << a.next << endl;
    cout << &b << endl;
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