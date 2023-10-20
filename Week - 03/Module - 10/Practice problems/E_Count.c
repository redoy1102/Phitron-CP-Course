#include<stdio.h>
#include<limits.h>
#include<string.h>

int main(){
    char ch[1000001];
    scanf("%s", &ch);
    int sum = 0;

    for(int i = 0; i < strlen(ch); i++){
        char c = ch[i];
        int ascii = c;
        sum += (ascii-48);
    }
    printf("%d\n", sum);


    return 0;
}