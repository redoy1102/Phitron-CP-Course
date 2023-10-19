#include<stdio.h>
#include<limits.h>
int main(){
    char ch[100];
    scanf("%s", &ch);

    int i = 0, count = 0;
    while(ch[i] != '\0'){
        count++;
        i++;
    }
    printf("Length of %s = %d", ch, count);



    return 0;
}