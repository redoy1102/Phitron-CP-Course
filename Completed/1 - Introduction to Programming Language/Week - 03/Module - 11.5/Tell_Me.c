#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, x;
        scanf("%d", &n);

        int num[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &num[i]);
        }

        scanf("%d", &x);

        int flag = 0;
        for(int i = 0; i < n; i++){
            if(num[i] == x){
                flag++;
                break;
            }
        }
        
        if(flag == 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    


    return 0;
}