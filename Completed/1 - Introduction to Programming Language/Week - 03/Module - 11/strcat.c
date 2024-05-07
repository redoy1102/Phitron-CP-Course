#include<stdio.h>
#include<string.h>
int main(){
    char ch[4], ch1[4];
    scanf("%s %s", ch, ch1);
    strcat(ch, ch1);
    printf("%s", ch);



    return 0;
}