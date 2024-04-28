#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int e = 0, o = 0, nt = 0, p = 0;

    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);

        if(num %2 == 0){
            e++;
        }
        else{
            o++;
        }

        if(num < 0){
            nt++;
        }
        else if(num > 0){
            p++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", e, o, p, nt);



    return 0;
}