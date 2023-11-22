#include<iostream>
#include<algorithm>     // for max(), min()
#include<utility>      // for swap()
using namespace std;
int main()
{
    //for two values
    int a, b;
    cin>>a>>b;

    int mx = max(a, b); cout<<mx<<endl;
    int mn = min(a, b); cout<<mn<<endl;
    
    swap(a, b);
    cout<<a<<endl<<b<<endl;
    // for three or more values
    // int mx = max({1,2,3,4,5});  cout<<"Maximum between multiple numbers = "<< mx<<endl;
    // int mn = min({1,2,3,4,5});  cout<<"Minimum between multiple numbers = "<< mn<<endl;



}