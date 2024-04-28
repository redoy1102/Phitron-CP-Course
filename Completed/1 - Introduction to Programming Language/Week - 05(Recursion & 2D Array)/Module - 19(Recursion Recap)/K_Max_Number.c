#include<stdio.h>
#include<limits.h>

int findMax(int ar[], int n, int i)
{
    if(i == n)
    {
        return  INT_MIN;
    }
    int mx = findMax(ar, n, i+1);
    if(ar[i] > mx)
    {
        return ar[i];
    }
    else
    {
        return mx;
    }
}
int main(){
    int n;  scanf("%d", &n);    int ar[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int maxValue = findMax(ar, n, 0);
    printf("%d\n", maxValue);

    return 0;
}