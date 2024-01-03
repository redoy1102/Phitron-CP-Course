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
    int ca[101] = {0};
    for(int i = 0; i < s; i++){
        ca[arr[i]]++;
    }
    printf("%d - %d", 100, ca[100]);



    



    return 0;
}