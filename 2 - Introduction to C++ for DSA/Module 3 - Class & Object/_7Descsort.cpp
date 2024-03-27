#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin >> s;
    int num[s];
    for (int i = 0; i < s; i++)
    {
        cin >> num[i];
    }
    sort(num, num + 5, greater<int>());
    for (int i = 0; i < s; i++)
    {
        cout<< num[i]<<" ";
    }
}