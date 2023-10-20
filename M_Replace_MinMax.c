#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    int min = ar[0], max = ar[0];
    for(int i = 1; i < n; i++){
        if(ar[i] < min){
            min = ar[i];
        }
        if(ar[i] > max){
            max = ar[i];
        }
    }
    // printf("max = %d, min = %d", max, min);

    for(int i = 0; i < n; i++){
        if(ar[i] == max){
            ar[i] = min;
        }
        else if(ar[i] == min){
            ar[i] = max;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }
    



    return 0;
}