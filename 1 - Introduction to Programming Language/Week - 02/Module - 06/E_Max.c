#include<stdio.h>
#include<limits.h>

int main(){
    int n, num;
    scanf("%d", &n);
    
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if(num > max){
            max = num;
        }
    }
    printf("%d\n", max);



    return 0;
}