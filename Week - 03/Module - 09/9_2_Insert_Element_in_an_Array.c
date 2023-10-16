#include<stdio.h>
int main(){
    int initialSize;
    scanf("%d", &initialSize);
    int ar[initialSize];

    for (int i = 0; i < initialSize; i++)
    {
        scanf("%d", &ar[i]);
    }

    int indexNumber, number;
    printf("Enter the newly added number and the index number using space: ");
    scanf("%d %d", &number, &indexNumber);
    initialSize++;
    for (int i = initialSize-1; i >= indexNumber+1; i--)
    {
        ar[i] = ar[i-1];
    }
    ar[indexNumber] = number;
    

    for (int i = 0; i < initialSize; i++)
    {
        printf("%d\n", ar[i]);
    }


    


    return 0;
}