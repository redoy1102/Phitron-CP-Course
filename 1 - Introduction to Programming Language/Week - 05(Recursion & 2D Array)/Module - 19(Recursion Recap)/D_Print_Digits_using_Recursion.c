#include<stdio.h>
void fun(int n)
{
    if(n==0)   return;
    int remainder = n % 10;
    fun(n/10);
    printf("%d ", remainder);
}

int main(){
    int t;  scanf("%d", &t);
    while(t--)
    {
        int num;    scanf("%d", &num);
        fun(num);
        if(num == 0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}