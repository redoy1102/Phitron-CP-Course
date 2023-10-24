#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int m1d = m1*d;
        int m2d = m1d / (m1+m2);

        int result = d - m2d;

        printf("%d\n", result);
    }
    


    return 0;
}