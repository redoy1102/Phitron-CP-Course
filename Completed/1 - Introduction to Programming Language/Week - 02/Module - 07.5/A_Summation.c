#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    
    long long sum = 0;
    
    for(int i = 0; i < n; i++){
        sum += ar[i];
    }
    printf("%lld", llabs(sum));
    
    // if(sum < 0){
    //     printf("%lld", (sum * -1));
    // }
    // else{
    //     printf("%lld", sum);
    // }
    
    

    return 0;
}