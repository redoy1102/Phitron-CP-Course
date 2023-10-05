#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    long long res = 1;

    for(int i = 2; i <= num; i++){
        res *= i;
    }
    printf("Factorial of %d = %lld", num, res);


    return 0;
}