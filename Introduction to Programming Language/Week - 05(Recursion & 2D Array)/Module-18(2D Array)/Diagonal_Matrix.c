#include<stdio.h>
int main(){
    int row, col, totalZero = 0;
    label:
    printf("Enter the value of row and column: ");
    scanf("%d%d", &row, &col);
    int mat[row][col], needZero = (row*col) - row;

    if(row == col)
    {
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
                    totalZero++;
                }
            }
        }

        if(totalZero == needZero)
        {
            printf("Diagonal Matrix");
        }
        else
        {
            printf("Not diagonal Matrix");
        }
    }
    else{
        printf("Row and column are not same.\n");
        goto label;
    }


    return 0;
}