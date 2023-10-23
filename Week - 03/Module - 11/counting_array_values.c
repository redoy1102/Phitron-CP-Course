#include<stdio.h>
#include<string.h>
int main(){
    int s;
    scanf("%d", &s);
    int arr[s];
    for(int i = 0; i < s; i++){
        scanf("%d", &arr[i]);
    }
    // for(int i = 0; i < s; i++){
    //     printf("%d ", arr[i]);
    // }
    int ca[5] = {0};
    for(int i = 0; i < s; i++){
        ca[arr[i]]++;
    }
    for(int i = 0; i < 5; i++){
        printf("%d-%d\n", i, ca[i]);
    }



    



    return 0;
}