#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    char arr[n+1];
    scanf("%s", arr);

    int sum = 0;
    for(int i = 0; i < strlen(arr); i++){
        int value = arr[i] - 48;
        sum += value;
    }
    printf("%d", sum);



    return 0;
}