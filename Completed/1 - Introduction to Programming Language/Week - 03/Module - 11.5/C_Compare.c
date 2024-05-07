#include<stdio.h>
#include<string.h>
int main(){
    char x[21], y[21];
    scanf("%s", x);
    scanf("%s", y);
    // printf("%s %s", x, y);
    int res = strcmp(x, y);
    if(res == 0 || res < 0){
        printf("%s", x);
    }
    else{
        printf("%s", y);
    }
    



    return 0;
}