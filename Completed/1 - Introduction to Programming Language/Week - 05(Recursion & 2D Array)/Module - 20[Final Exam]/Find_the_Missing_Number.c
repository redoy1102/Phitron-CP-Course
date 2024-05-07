#include<stdio.h>
int main(){
    int t;  scanf("%d", &t);
    while(t--)
    {
        long long m;
        int a, b, c; 
        scanf("%lld%d%d%d", &m, &a, &b, &c);
        long long abc = a*b*c;

        if(m % abc == 0)
        {
            printf("%lld\n", m / abc);
        }
        else
        {
            printf("-1\n");
        }
    }


    return 0;
}