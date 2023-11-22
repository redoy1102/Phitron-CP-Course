#include <stdio.h>
// #include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    
    int x, c = 0;
    scanf("%d", &x);
    
    for(int i = 0; i < n; i++){
        if(ar[i] == x){
            printf("%d\n", i);
            c = 1;
            break;
        }
    }
    if(c == 0){
        printf("%d\n", -1);
    }
    
    

    return 0;
}