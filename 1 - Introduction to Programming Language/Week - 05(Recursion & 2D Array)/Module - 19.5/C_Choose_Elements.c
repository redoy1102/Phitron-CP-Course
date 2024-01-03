#include<stdio.h>
int main(){
    int n, k;   scanf("%d%d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++)      scanf("%d", &a[i]);

    // Selection sort
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    long long sum = 0;
    for(int j = 0; j < k; j++)
    {
        if(a[j] > 0)
        {
            sum += a[j];
        }
    }
    printf("%lld\n", sum);
    

    return 0;
}