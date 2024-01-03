#include<stdio.h>
int main(){
    int n, m;   scanf("%d%d", &n, &m);
    int ar[n][m];
    int p = 1, s = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
            if(i == j)
            {
                if(ar[i][j] != 1)
                {
                    p = 0;
                }
            }
        }
    }
    int cm = m-1;
    for(int i = 0; i < n; i++)
    {
        if(ar[i][cm] != 1)
        {
            s = 0;
        }
        cm--;
    }
    int needZero;
    if(p == 1 && s == 1)
    {
        if(n %2 != 0 && m %2 != 0)
        {
            needZero = (m*n) - (m+n-1);
        }
        else{
            needZero = (m*n) - (m+n);
        }
        int sumZero = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(ar[i][j] == 0)   sumZero++;
            }
        }
        if(needZero == sumZero) printf("YES\n");
        else    printf("NO\n");
    }    
    else    printf("NO\n");

    return 0;
}