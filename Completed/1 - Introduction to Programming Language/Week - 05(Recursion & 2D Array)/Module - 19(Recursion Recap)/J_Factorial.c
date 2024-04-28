#include<stdio.h>
long long int fact(long long int n)
{
    if(n == 0)
    {
        return 1;   // 0! = 1
    }
    long long int res = fact(n-1);
    return n*res;   // n*(n-1)!
}
int main(){
    long long int n;    scanf("%lld", &n);

    long long int res = fact(n);
    printf("%lld\n",res);

    return 0;
}