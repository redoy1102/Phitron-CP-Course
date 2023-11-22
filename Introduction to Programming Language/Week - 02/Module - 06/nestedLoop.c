#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 5; j++){
            printf("%d\t", j);
        }
        printf("\n");
    }


    return 0;
}