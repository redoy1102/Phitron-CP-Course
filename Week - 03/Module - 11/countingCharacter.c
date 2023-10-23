#include<stdio.h>
#include<string.h>
int main(){
    char ch[200];
    scanf("%s", &ch);

    int ca[26] = {0};
    for(int i = 0; i < strlen(ch); i++){
        int value = ch[i]-97;
        ca[value]++;
    }
    for(int i = 0; i < 26; i++){
        printf("%c - %d\n", i+97, ca[i]);
    }



    return 0;
}