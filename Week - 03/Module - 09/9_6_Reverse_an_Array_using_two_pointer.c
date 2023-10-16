#include<stdio.h>
int main(){
    int s;
    scanf("%d", &s);
    int ar[s];
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Before swapping: ");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", ar[i]);
    }





    int j = 0;
    int k = s-1;
    while (j < k)
    {
        int temp = ar[j];
        ar[j] = ar[k];
        ar[k] = temp;
        j++;
        k--;
    }

    printf("\n\nAfter swapping: ");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", ar[i]);
    }
    
    


    return 0;
}