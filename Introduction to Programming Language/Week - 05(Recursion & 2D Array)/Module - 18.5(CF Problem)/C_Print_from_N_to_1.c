#include<stdio.h>
void fun(n)
{
    if(n == 0)   return;
    else if(n == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d ", n);
    }
    
    fun(n-1);
}
int main(){
    int n;
    scanf("%d", &n);
    fun(n);


    return 0;
}