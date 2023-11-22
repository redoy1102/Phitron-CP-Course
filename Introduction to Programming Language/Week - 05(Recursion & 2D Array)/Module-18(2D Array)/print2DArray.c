#include<stdio.h>
int main(){
    int nums[2][3];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &nums[i][j]);
        }
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}