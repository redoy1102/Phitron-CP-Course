#include<stdio.h>
#include<string.h>

int my_len(char ch[]){
    printf("%s", ch);
}
int main(){
    char ch[6];
    scanf("%s", ch);

    my_len(ch);

    return 0;
}