#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        char ch[101];
        scanf("%s", ch);

        int len = strlen(ch);

        if(len > 10){
            printf("%c%d%c\n", ch[0], len-2, ch[len-1]);
        }
        else{
            printf("%s\n", ch);
        }
    }



    return 0;
}