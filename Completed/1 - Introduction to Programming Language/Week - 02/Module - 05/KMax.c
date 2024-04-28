#include<stdio.h>
int main(){
    //! start input section

    int a, b, c;
    // char x;
    scanf("%d%d%d", &a, &b, &c);

    //! end input section

    // finding minimum value
    if(a <= b && a <= c){
        printf("%d ", a);
    }
    else if(b <= a && b <= c){
        printf("%d ", b);
    }
    else{
        printf("%d ", c);
    }

    // finding maximum value
    if(a >= b && a >= c){
        printf("%d\n", a);
    }
    else if(b >= a && b >= c){
        printf("%d\n", b);
    }
    else{
        printf("%d\n", c);
    }
    



    return 0;
}