#include<stdio.h>
#include<string.h>
int main(){
    char s1[100], s2[200];
    scanf("%s %s", s1, s2);

    int value = strcmp(s1, s2);

    if(value == 0){
        printf("Same");
    }
    else if(value > 0){
        printf("%s", s2);
    }
    else if(value < 0){
        printf("%s", s1);
    }
    



    return 0;
}