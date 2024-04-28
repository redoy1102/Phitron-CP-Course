#include<stdio.h>
#include<limits.h>
int main(){
    // char ch;
    // scanf("%c", &ch);
    // int n;
    // scanf("%d", &n);
    long long e, m, b, min = 0;
    scanf("%lld %lld %lld", &e, &m,&b);

    if(e <= m && e <= b){
        min = e;
    }
    else if(m <= e && m <= b){
        min = m;
    }
    else if(b <= e && b <= m){
        min = b;
    }

    e -= min;
    m -= min;
    b -= min;

    long long needBody = e / 2;
    // printf("%lld", b);

    if(b >= needBody){
        printf("%lld\n", min + needBody);
    }
    else if(needBody >= b){
        printf("%lld\n", min + b);
    }
    else{
        printf("%lld\n", min);
    }
    




    return 0;
}