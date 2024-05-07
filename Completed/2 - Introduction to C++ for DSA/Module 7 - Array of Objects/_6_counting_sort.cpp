#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cin >> name;
    int fre[26] = {0};

    for(char ch: name){
        fre[ch - 'a']++;
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        while(fre[c-'a']--)
        {
            cout << c;
        }
    }

        return 0;
}