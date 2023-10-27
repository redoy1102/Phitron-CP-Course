#include<stdio.h>
#include<string.h>
int main(){
    int num[6] = {1,2,3,4,5,6};
    int find = 11;
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 6; j++){
            if(num[i] + num[j] == find){
                printf("%d + %d = %d", num[i], num[j], find);
                break;
            }
        }
    }
    return 0;
}