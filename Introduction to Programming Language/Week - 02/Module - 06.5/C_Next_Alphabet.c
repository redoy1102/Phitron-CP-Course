#include<stdio.h>
#include<limits.h>
int main(){
    // int n;
    // scanf("%d", &n);
    char ch;
    scanf("%c", &ch);
    if(ch == 'z'){
        printf("a\n");
    }
    else{
        int ascii_code = ch;
        ascii_code++;
        printf("%c\n", ascii_code);
    }
    
    



    return 0;
}