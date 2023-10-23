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

    // way of output - 1
    // for(int i = 0; i < 26; i++){
    //     if(ca[i] != 0){
    //         printf("%c - %d\n", i+97, ca[i]);
    //     }
    // }

    // way of output - 2
    for(int i = 0; i < strlen(ch); i++){
        int value = ch[i] - 97;
        
        printf("%c - %d\n",value+97, ca[value]);
    }
    
    // way of output - 3
    // for(int i = 0; i < strlen(ch); i++){
    //     int value = ch[i] - 97;
        
    //     if(ca[value] != 0){
    //         printf("%c - %d\n",value+97, ca[value]);
    //     }
    //     ca[value] = 0;
    // }



    return 0;
}