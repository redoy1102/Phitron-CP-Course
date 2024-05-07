#include<stdio.h>
#include<string.h>
int main(){
    // char ch[n+1];
    // scanf("%s", &ch);
    int num = 10;
    int *p = &num;
    printf("Memory address of %d = %p", num, p);
    

    return 0;
}