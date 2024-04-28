#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin>>n;

    int countChar[26]={0};

    for(int i = 0; i < n; i++){
        char c;
        cin>>c;
        countChar[c-97]++;
    }

    for(int i = 0; i < 26; i++){
        while(countChar[i]--){
            cout<<char(i+97);
        }
    }

    return 0;
}