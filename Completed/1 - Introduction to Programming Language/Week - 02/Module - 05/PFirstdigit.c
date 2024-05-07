#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    
    while(a > 9){
        a = a / 10;
    }
    if (a % 2 == 0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }



    return 0;
}