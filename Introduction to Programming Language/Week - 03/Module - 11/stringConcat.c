#include<stdio.h>
#include<string.h>
int main(){
    // char ch;
    // scanf("%c", &ch);
    int la, lb;
    scanf("%d%d", &la, &lb);
    // printf("%d %d", la, lb);
    char a[la+lb];
    char b[lb];
    scanf("%s %s", a, b);

    int i = 0, j = la-1;
    for(int i = 0; i < lb; i++){
        a[j] = b[i];
        j++;
    }
    printf("%s", a);




    return 0;
}