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

    for(int i = n-1; i >= 0; i--){
        printf("%d ", ar[i]);
    }
    



    return 0;
}