#include<stdio.h>
int main(){
    int row, col, sum = 0;
    scanf("%d%d", &row, &col);
    int mat[row][col], elements = row*col;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(mat[i][j] == 0)
            {
                sum++;
            }
        }
    }

    if(sum == elements)
    {
        printf("Zero matrix");
    }


    return 0;
}