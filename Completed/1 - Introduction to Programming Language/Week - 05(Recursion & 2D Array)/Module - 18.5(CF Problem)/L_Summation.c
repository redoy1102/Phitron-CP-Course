#include<stdio.h>
long long sum = 0;
long long fun(int ar[], int n, int i)
{
    if(i == n)  return sum;
    sum += ar[i];
    fun(ar, n, i+1);
}
int main(){
    int n;  scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++)  scanf("%lld", &ar[i]);

    long long res = fun(ar, n, 0);
    printf("%lld\n", res);


    return 0;
}