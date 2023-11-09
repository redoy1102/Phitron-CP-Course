#include<stdio.h>
#include<string.h>
void fun(int ar[], int s, int i){
    if(i == s)  return;

    printf("%d\n", ar[i]);
    fun(ar, s, i+1);
}

int main(){
    int ar[3] = {10,20,30};
    fun(ar, 3, 0);

    return 0;
}