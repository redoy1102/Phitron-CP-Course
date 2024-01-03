#include<stdio.h>
void fun(int ar[], int i)
{
    if(i == -1) return;
    else if(i %2 == 0)
    {
        printf("%d ", ar[i]);
    }
    fun(ar, i-1);
}
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    fun(ar, n-1);


    return 0;
}