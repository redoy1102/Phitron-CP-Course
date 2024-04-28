#include<bits/stdc++.h>
using namespace std;
void changer(string &s, int index)
{
    s.replace(index, 5, " ");
}

void solve(){
    string s;
    cin >> s;
    while(1)
    {
        if(s.find("EGYPT") != string::npos)
        {
            int index = s.find("EGYPT");
            changer(s, index);
        }
        else{
            break;
        }
    }
    cout << s << endl;
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