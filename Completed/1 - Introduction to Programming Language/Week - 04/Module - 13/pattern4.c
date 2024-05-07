#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);

    int space = n-1;
    int st = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        for(int j = 1; j <= st; j++){
            printf("*");
        }
        space--;
        st++;

        printf("\n");
    }
    


    return 0;
}