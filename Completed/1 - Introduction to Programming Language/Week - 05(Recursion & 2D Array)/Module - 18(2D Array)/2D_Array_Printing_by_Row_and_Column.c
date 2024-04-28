#include<stdio.h>
int main(){
    int num[4][3];
    printf("Enter all the values: ");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &num[i][j]);    
        }
    }
    printf("\nPrinting all the values of 3rd row: ");
    for(int i = 0; i < 3; i++)
    {
        printf("%d ", num[2][i]);
    }

    return 0;
}