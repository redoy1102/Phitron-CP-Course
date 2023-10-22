#include<stdio.h>
#include<string.h>
int main(){
    int len1, len2, count = 0, min = 0;

    //printf("Enter the length of first string: ");
    scanf("%d", &len1);
    //printf("Enter the length of second string: ");
    scanf("%d", &len2);

    char a[len1+1], b[len2+1];

    //printf("Enter the first string: ");
    scanf("%s", a);

    //printf("Enter the second string: ");
    scanf("%s", b);

    if(len1 < len2){
        min = len1;
    }
    else{
        min = len2;
    }

    // printf("%s %s", a, b);
    for(int i = 0; i < min; i++){
        if(a[i] != b[i]){
            count++;
            int a_ascii = a[i];
            int b_ascii = b[i];
            if(a_ascii < b_ascii){
                printf("%s is smaller", a);
                break;
            }
            else{
                printf("%s is smaller", b);
                break;
            }
        }
    }
    if(count == 0){
        if(strlen(a) < strlen(b)){
            printf("%s is smaller", a);
        }
        else if(strlen(a) == strlen(b)){
            printf("%s == %s", a, b);
        }
        else{
            printf("%s is smaller", b);
        }
    }
    return 0;
}