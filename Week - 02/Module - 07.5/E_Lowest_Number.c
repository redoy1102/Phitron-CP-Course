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

    int min = ar[0];
    int indexMin = 0;

    // printf("%d\n", min);

    for(int i = 1; i < n; i++){
        if(ar[i] < min){
            min = ar[i];
            indexMin = i;
        }
    }

    printf("%d %d\n", min, (indexMin+1));
    



    return 0;
}