#include<stdio.h>
int main(){
    //! start input section

    // int a, b;
    char x;
    scanf("%c", &x);

    //! end input section

    int asciiCode = x;
    if(asciiCode >= 48 && asciiCode <= 57){
        printf("IS DIGIT\n");
    }
    else if(asciiCode >= 97 && asciiCode <= 122){
        printf("ALPHA\nIS SMALL\n");
    }
    else if(asciiCode >= 65 && asciiCode <= 90){
        printf("ALPHA\nIS CAPITAL\n");
    }
    



    return 0;
}