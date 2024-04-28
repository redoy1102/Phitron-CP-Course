#include<stdio.h>
#include<limits.h>
int main(){
    // char ch;
    // scanf("%c", &ch);
    int n;
    scanf("%d", &n);

    int lastDigit = n % 10;

    if (lastDigit == 0){
        printf("YES\n");
    }
    else{
        int firstDigit = n / 10;
        // printf("%d - %d",firstDigit, lastDigit);

        int fl = firstDigit % lastDigit;
        int lf = lastDigit % firstDigit;

        if((fl == 0 || lf == 0) ){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }


    return 0;
}