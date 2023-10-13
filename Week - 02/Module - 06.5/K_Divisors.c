#include<stdio.h>
#include<limits.h>
int main(){
    // char ch;
    // scanf("%c", &ch);
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n / 2; i++){
        if(n % i == 0){
            printf("%d\n", i);
        }
    }
    printf("%d\n", n);
    



    return 0;
}