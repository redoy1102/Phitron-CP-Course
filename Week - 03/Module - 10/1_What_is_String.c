#include<stdio.h>
int main(){
    char name[5];
    int size = sizeof(name);
    printf("%d\n", size);

    int numbers[10];
    int sn = sizeof(numbers) / sizeof(int);
    printf("Size of numbers: %d", sn);
}