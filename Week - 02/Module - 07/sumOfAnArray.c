#include<stdio.h>
#include<limits.h>
int main(){
    // char ch;
    // scanf("%c", &ch);
    int n, sum = 0;
    scanf("%d", &n);

    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    for(int i = 0; i < n; i++){
        sum += ar[i];
    }
    printf("\nSummation of the array: %d", sum);





    return 0;
}