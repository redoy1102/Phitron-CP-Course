#include<stdio.h>
int main(){
    int t;  scanf("%d", &t);
    while(t--)
    {
        int n;  scanf("%d", &n);
        int A[n];
        for(int i = 0; i < n; i++)  scanf("%d", &A[i]);

        int B[n];
        for(int i = 0; i < n; i++)  B[i] = A[i];

        // selection sort
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(B[i] > B[j])
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }
        // creating C array
        int C[n];
        for(int i = 0; i < n; i++)
        {
            int res = A[i] - B[i];

            if(res < 0)     C[i] = res*(-1);
            else    C[i] = res;
        }
        
        // printing C array
        for(int i = 0; i < n; i++)  printf("%d ", C[i]);
        printf("\n");
    }


    return 0;
}