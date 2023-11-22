#include<stdio.h>
// #include<limits.h>
int main(){
    // char ch;
    // scanf("%c", &ch);
    // int n;
    // scanf("%d", &n);
    long long a, b, c;
    long long d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    long long pm = a + b - c;
    long long mp = a - b + c;
    long long pmu = a + b * c;
    long long mup = a * b + c;
    long long miMu = a - b * c;
    long long muMi = a * b - c;

    // printf("pm = %lld\n", pm);
    // printf("mp = %lld\n", mp);
    // printf("pmu = %lld\n", pmu);
    // printf("mup = %lld\n", mup);
    // printf("miMu = %lld\n", miMu);
    // printf("muMi = %lld\n", muMi);
    
    if(pm == d || mp == d){
        printf("YES\n");
    }
    else if((pmu == d) || (mup == d) || (miMu == d) || (muMi == d) ){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }



    return 0;
}