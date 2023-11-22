#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    int st = n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= st; j++){
            printf("*");
        }
        st--;
        printf("\n");
    }


    return 0;
}