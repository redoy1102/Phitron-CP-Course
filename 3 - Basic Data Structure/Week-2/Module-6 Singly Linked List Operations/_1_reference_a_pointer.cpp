#include<bits/stdc++.h>
using namespace std;
void reference(int *&p)
{
    p = NULL;
}
void fun(int *p)
{
    cout<<"From fun function"<<endl;
    // p = NULL;
    cout<<p<<endl;
}
void solve()
{
    int num = 10;
    int *ma = &num;
    cout<<ma<<endl;
    reference(ma);
    // fun(ma);
    cout<<"After function call"<<endl;
    cout<<ma<<endl;    
}
int main(){
    int t;
    // cin >> t;
    t = 1;
    while(t--){
        solve();
    }

    return 0;
}