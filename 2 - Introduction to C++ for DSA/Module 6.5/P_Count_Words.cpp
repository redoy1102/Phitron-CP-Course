#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    getline(cin, s);

    bool flag = false;
    int count = 0;
    for(char c: s)
    {
        if(isalpha(c))
        {
            if(flag==false)
            {
                flag = true;
                count++;
            }
        }
        else{
            flag = false;
        }
    }
    cout << count << endl;
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