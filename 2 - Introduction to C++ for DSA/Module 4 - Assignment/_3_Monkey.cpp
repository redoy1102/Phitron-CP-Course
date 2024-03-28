#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    while(getline(cin, s))
    {
        int len = s.length();
        int fa[26] = {0};
        for (int i = 0; i < len; i++)
        {
            int asciiCode = s[i];
            if(asciiCode >= 97 && asciiCode <= 122)
            {
                fa[asciiCode-97]++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if(fa[i] != 0)
            {
                while(fa[i]--)
                {
                    char ch = i + 97;
                    cout << ch;
                }
            }
        }
        cout << endl;
    }
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