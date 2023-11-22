#include<stdio.h>
#include<limits.h>
int main(){
    char ch[5];
    fgets(ch, 5, stdin);

    printf("%s", ch);

    return 0;
}