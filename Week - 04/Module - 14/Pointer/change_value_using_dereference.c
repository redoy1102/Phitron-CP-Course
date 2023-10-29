#include<stdio.h>
#include<string.h>
int main(){
    int num = 10;
    int *p = &num;      // storing the address of num into pointer variable p
    printf("%d\n", *p);
    *p = 20;
    printf("%d", *p);



    return 0;
}