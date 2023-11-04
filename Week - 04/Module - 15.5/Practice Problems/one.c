#include<stdio.h>
#include<string.h>

int my_abs(int n){
    return n*(-1);
}

int main(){
    int n;
    scanf("%d", &n);

    if(n < 0){
        int res = my_abs(n);
        printf("%d", res);
    }
    else{
        printf("%d", n);
    }
    


    return 0;
}