#include<stdio.h>
#include<string.h>

int is_palindrome(char ch[], int len){
    int i = 0, j = len-1;

    while(i <= j){
        if(ch[i] != ch[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main(){
    char ch[1001];
    scanf("%s", ch);
    
    int res = is_palindrome(ch, strlen(ch));
    if(res == 1){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    


    return 0;
}