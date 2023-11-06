#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    int s = n-1;
    int st = 1;
    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= s; j++){
            printf(" ");
        }
        for(int j = 1; j <= st; j++){
            if(i %2 != 0){
                printf("#");
            }
            else{
                printf("-");
            }
        }
        s--;
        st += 2;
        printf("\n");
    }
    s += 2;
    st -= 4;
    for(int i = 1 ; i <= n-1; i++){
        for(int j = 1; j <= s; j++){
            printf(" ");
        }
        for(int j = 1; j <= st; j++){
            if((i %2 != 0 && n %2 != 0) || (i %2 == 0 && n %2 == 0)){
                printf("-");
            }
            else{
                printf("#");
            }
        }
        s++;
        st -= 2;
        printf("\n");
    }



    return 0;
}