#include<bits/stdc++.h>
using namespace std;

void solve(){
        string s , x;
        cin>>s>>x;

        for(int i = 0 ;i < s.size(); i++)
        {
            if(s[i]!=x[0])
            {
                cout<<s[i];
            }
           else if(s[i]==x[0])
           {
                int flag = 0;
                int z = 0;
                for(int j = 0 ; j < x.size(); j++,z++)
                {
                    if(s[i+z] != x[j]) 
                    {
                        break;
                    }
                    if(j == x.size() - 1)
                    {
                        flag = 1;
                    }
                }
                if(flag == 0)
                {
                    cout<<s[i];
                }
                else{
                    i = i + x.size() - 1;
                    cout << '#';
                } 
            }
        }
        cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}