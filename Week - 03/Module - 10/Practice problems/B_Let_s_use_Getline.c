#include<stdio.h>
#include<limits.h>
int main(){
    char ch[1000001];
    fgets(ch, 1000001, stdin);

    int i = 0;
    while(ch[i] != '\\'){
        printf("%c", ch[i]);
        i++;
    }




    return 0;
}