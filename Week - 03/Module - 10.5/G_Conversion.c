#include<stdio.h>
#include<limits.h>
#include<string.h>

int main(){
    char ch[100001];
    scanf("%s", ch);
    for(int i = 0;i < strlen(ch); i++){
        if(ch[i] == ','){
            ch[i] = ' ';
        }
        else{
            int ascii = ch[i];
            if(ascii >= 65 && ascii <= 90){
                char small = ascii + 32;
                ch[i] = small;
            }
            else if(ascii >= 97 && ascii <= 122){
                char capital = ascii - 32;
                ch[i] = capital;
            }
        }
    }
    printf("%s\n", ch);
    
    



    return 0;
}