#include<stdio.h>
#include<string.h>
int main(){
    int n, star;
    scanf("%d", &n);
    int space = n - 1;
    star = 1;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        for(int j = 1; j <= star; j++){
            printf("*");
        }
        space--;
        star = star + 2;
        printf("\n");

    }


    return 0;
}