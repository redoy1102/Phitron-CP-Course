#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // printf("Original Array: ");
    // for(int i = 0; i < n; i++){
    //     printf("%d", arr[i]);
    // }

    //Ascending order
    for(int i = 0;  i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //printf("Ascending order: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}