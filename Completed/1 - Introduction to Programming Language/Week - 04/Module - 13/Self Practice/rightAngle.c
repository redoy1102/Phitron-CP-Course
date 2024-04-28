#include<stdio.h>
#include<string.h>
int main(){
    int n, s = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= s; j++){
            printf("*");
        }
        s++;
        printf("\n");
    }


    return 0;
}