#include<bits/stdc++.h>
using namespace std;
int c(string s)
{
    stringstream ss(s);
    string word;
    int count = 0;
    while(ss>>word)
    {
        count++;
    }
    return count;
}
void solve(){
    string s;
    getline(cin, s);

    int count = c(s);

    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        reverse(word.begin(), word.end());
        if(count != 1)
        {
            cout << word << " ";
            count--;
        }
        else{
            cout << word << endl;
        }
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