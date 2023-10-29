#include<stdio.h>
#include<string.h>

int fun(){
    int num = 100;
    printf("Address of %d = %p\n", num, &num);
}
int main(){
    fun();
    int num = 200;
    printf("Address of %d = %p", num, &num);

    return 0;
}