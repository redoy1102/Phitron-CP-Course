#include<stdio.h>
#include<string.h>
int main(){
    char a[5], b[5];
    printf("Enter two string: ");
    scanf("%s %s", a, b);
    // printf("%s %s", a, b);

    // for(int i = 0; i <= strlen(b); i++){
    //     a[i] = b[i];
    // }
    strcpy(a, b);
    printf("%s %s", a, b);



    return 0;
}