#include<stdio.h>
#include<string.h>
int main(){
    int num = 10;
    printf("Printing the value of num without pointer = %d\n\n\n", num);

    int *p = &num;
    printf("Printing the value of num by using pointer = %d\n", *p);

    


    return 0;
}