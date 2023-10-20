#include<stdio.h>
#include<string.h>
int main(){
    char ch[1001];
    scanf("%s", ch);

    int i = 0, j = strlen(ch)-1;
    int count = 0;
    while(i < j){
        if(ch[i] != ch[j]){
            count++;
            break;
        }
        i++;
        j--;
    }
    if(count == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    



    return 0;
}