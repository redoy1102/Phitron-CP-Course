#include<stdio.h>
void fun(int i, int n)
{
    if(i == n)  return;
    printf("I love Recursion\n");
    fun(i+1, n);
}
int main(){
    int n;
    scanf("%d", &n);

    fun(0, n);


    return 0;
}