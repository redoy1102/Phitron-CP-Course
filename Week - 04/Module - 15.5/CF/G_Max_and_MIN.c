#include<stdio.h>
#include<string.h>

void sort(int ar[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(ar[i] > ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    printf("%d %d\n", ar[0], ar[n-1]);

}

int main(){
    int n;
    scanf("%d", &n);

    int ar[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    sort(ar, n);


    return 0;
}