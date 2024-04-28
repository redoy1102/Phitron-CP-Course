#include<stdio.h>
#include<string.h>
void fun(int i)
{
    if(i == 6)  return;
    fun(i+1);
    printf("%d\n", i);
}
int main(){
    int n;
    scanf("%d", &n);
    fun(n);

    return 0;
}