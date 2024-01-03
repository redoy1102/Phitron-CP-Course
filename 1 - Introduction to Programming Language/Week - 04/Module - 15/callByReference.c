#include<stdio.h>
#include<string.h>

int change(int *p){
    printf("Before: Memory address of %d = %p\n", *p, p);
    *p = 100;
    printf("After: Memory address of %d = %p", *p, p);

}
int main(){
    int num = 50;

    change(&num);


    return 0;
}