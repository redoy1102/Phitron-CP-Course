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

    for(int j = n-1; j >= 0; j--){
        printf("ar[%d] = %d\n", j, ar[j]);
    }
    



    return 0;
}