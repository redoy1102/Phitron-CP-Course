#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[6] = {10, 50, 4, 9, 3, 1};
    sort(ar, ar+6, greater<int>());
    
    for(int i = 0; i < 6; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}