#include<stdio.h>
#include<limits.h>
int main(){
    // char ch;
    // scanf("%c", &ch);
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    for(int i = 0; i < n; i++){
        if(ar[i] <= 10){
            printf("A[%d] = %d\n", i, ar[i]);
        }
    }
    



    return 0;
}