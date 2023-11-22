/* Given a number N. Print its factorial.
1 <= N <= 100
Print answer modulo M
where M = 47
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  scanf("%d", &n);
    long long fact = 1;
    for(int i = 2; i <= n; i++)     fact = (fact * i) % 47;
    printf("%d", fact);


    return 0;
}