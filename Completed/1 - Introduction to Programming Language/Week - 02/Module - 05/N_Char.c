#include<stdio.h>
int main(){
    //! start input section

    // int a, b;
    char x;
    scanf("%c", &x);

    //! end input section

    int asc = x;
    if(asc >= 97 && asc <= 122){
        printf("%c", (asc-32));
    }
    else if(asc >= 65 && asc <= 90){
        printf("%c", asc+32);
    }
    

    



    return 0;
}