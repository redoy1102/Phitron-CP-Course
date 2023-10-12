#include<stdio.h>
#include<limits.h>
int main(){
    int sum = 0;
    int i = 1;
    while(i <= 100){
        sum += i;
        i++;
    }
    printf("Summation of 1 to 100: %d", sum);
    



    return 0;
}