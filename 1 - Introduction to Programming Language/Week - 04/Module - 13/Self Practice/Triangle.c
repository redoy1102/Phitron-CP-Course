#include<stdio.h>
#include<string.h>
int main(){
    int n, st = 1;
    scanf("%d", &n);
    int s = n-1;

    for(int i = 1; i<=n;i++){       // 5 lines

        for(int j = 1; j <= s; j++){        // for printing spaces
            printf(" ");
        }
        for(int j = 1; j <= st; j++){       // for printing star
            printf("*");
        }
        s--;
        st += 2;

        printf("\n");
    }
    


    return 0;
}