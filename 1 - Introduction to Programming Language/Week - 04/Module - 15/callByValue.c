#include<stdio.h>
#include<string.h>

int check(int x){
    printf("2. Memory address: %p", &x);
}

int main(){
    int x = 10;
    printf("1. Memory address: %p\n", &x);

    check(10);

    return 0;
}