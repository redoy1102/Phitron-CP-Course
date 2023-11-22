#include<stdio.h>
int main(){
    int initialSize;
    scanf("%d", &initialSize);
    int ar[initialSize];

    for (int i = 0; i < initialSize; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Before deletion: ");
    for (int i = 0; i < initialSize; i++)
    {
        printf("%d ", ar[i]);
    }



    int deleteIndexNumber;
    printf("\nEnter the delete index number: ");
    scanf("%d", &deleteIndexNumber);

    for (int i = deleteIndexNumber; i <= initialSize-2; i++)
    {
        ar[i] = ar[i+1];
    }
    printf("After deletion: ");
    for (int i = 0; i < initialSize-1; i++)
    {
        printf("%d ", ar[i]);
    }


    


    return 0;
}