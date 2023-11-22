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
        if(ar[i] < 0){
            ar[i] = 2;
        }
        else if(ar[i] > 0){
            ar[i] = 1;
        }
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }


    return 0;
}