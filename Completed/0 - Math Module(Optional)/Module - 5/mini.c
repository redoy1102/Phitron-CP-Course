#include<stdio.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(){
    int a, b;
    scanf("%d%d", &a, &b);

    int m = MIN(a, b);

    printf("%d", m);

    return 0;
}