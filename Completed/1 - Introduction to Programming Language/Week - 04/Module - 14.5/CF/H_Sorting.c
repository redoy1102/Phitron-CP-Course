#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);

    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    //selection sort
    for(int i = 0; i <= n-1; i++){
        for(int j = i; j < n; j++){
            if(ar[i] > ar[j]){
                int t = ar[i];
                ar[i] = ar[j];
                ar[j] = t;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }

    return 0;
}