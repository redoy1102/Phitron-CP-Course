#include<stdio.h>
#include<limits.h>
int main(){
    // char ch;
    // scanf("%c", &ch);
    int n1;
    scanf("%d", &n1);
    int ar1[n1];
    for(int i = 0; i < n1; i++){
        scanf("%d", &ar1[i]);
    }

    int n2;
    scanf("%d", &n2);
    int ar2[n2];
    for(int i = 0; i < n2; i++){
        scanf("%d", &ar2[i]);
    }

    int newAr[n1+n2];
    int k = 0;
    for(int i = 0; i < n1; i++){
        newAr[k] = ar1[i];
        k++;
    }
    for(int i = 0; i < n2; i++){
        newAr[k] = ar2[i];
        k++;
    }

    printf("Values of new array: ");
    for(int i = 0; i < n1+n2; i++){
        printf("%d ", newAr[i]);
    }



    return 0;
}