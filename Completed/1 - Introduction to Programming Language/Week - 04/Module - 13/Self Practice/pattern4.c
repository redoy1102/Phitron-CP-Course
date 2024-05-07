#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);

    int space = n/2;

    int st = 1;

    for(int i = 1; i <= (n/2)+1; i++){
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        for(int j = 1; j <= st; j++){
            printf("*");
        }
        space--;
        st+=2;

        printf("\n");
    }
    st -= 4;

    int s = 1;
    // int star = (n/2)+1;

    for(int i = 1; i <= n-((n/2)+1); i++){
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