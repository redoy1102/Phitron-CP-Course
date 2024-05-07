#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    int s = n-n;
    int st = (n*2)-1;
    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= s; j++){
            printf(" ");
        }
        for(int j = 1; j <= st; j++){
            printf("*");
        }
        s++;
        st -= 2;
        printf("\n");
    }


    return 0;
}