#include<stdio.h>

void sort(int a, int b, int c){
    int ar[3] = {a, b, c};
    for(int i = 0; i < 2; i++){
        for(int j = i + 1; j < 3; j++){
            if(ar[i] > ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        printf("%d\n", ar[i]);
    }
}

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    sort(a, b, c);
    printf("\n");

    printf("%d\n%d\n%d\n", a, b, c);


    return 0;
}