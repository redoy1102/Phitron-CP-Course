#include<stdio.h>
#include<string.h>
int main(){
    int num = 10;
    int *p = &num;
    printf("Memory Address = %p\n", p);
    printf("Memory Address = %d", *p);


    return 0;
}