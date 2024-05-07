#include<stdio.h>
int main(){
    int n;  scanf("%d",&n);
    int row = ((n+1) / 2) + 5;
    int col = (row*2) - 1;
    int space = row-1;
    int star = 1;

    // printing triangle
    for(int j = 0; j < row; j++)
    {
        for(int i = 0; i < space; i++)
        {
            printf(" ");
        }
        for(int i = 1; i <= star; i++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

    space = 5;
    for(int i = 0; i < 5; i++)
    {
        for(int i = 0; i < space; i++)
        {
            printf(" ");
        }
        for(int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}