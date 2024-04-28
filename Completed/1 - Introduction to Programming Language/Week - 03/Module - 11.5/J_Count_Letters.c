#include<stdio.h>
#include<string.h>
int main(){
    char ch;
    int ca[26] = {0};

    while(scanf("%c", &ch) != EOF){
        int value = ch - 97;
        ca[value]++;
    }
    for(int i = 0; i<26; i++){
        if(ca[i] != 0){
            printf("%c : %d\n", i+97, ca[i]);
        }
        ca[i] = 0;
    }
    
    return 0;
}