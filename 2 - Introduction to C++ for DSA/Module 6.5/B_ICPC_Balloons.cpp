#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string checker;
    int count = 0;
    for(char ch:s)
    {
        if(checker.find(ch) != string::npos)
        {
            count++;
        }
        else{
            checker.push_back(ch);
            count += 2;
        }
    }
    cout << count << endl;
}
int main(){
    int t;
    cin >> t;
    // t = 1;
    while(t--){
        solve();
    }

    return 0;
}