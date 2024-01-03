#include<stdio.h>
#include<string.h>
int main(){
    char ch[10001];
    scanf("%s", ch);

    int ca[26] = {0};
    for(int i = 0; i < strlen(ch); i++){
        int value = ch[i]-97;
        ca[value]++;
    }

    for(int i = 0; i < 26; i++){
        if(ca[i] != 0){
            printf("%c - %d\n", i+97, ca[i]);
        }
    }

    


    return 0;
}