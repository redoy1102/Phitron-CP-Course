#include<stdio.h>
#include<string.h>
int fun(char ch[], int i)
{
    if(ch[i] == '\0')   return 0;
    int l = fun(ch, i+1);
    return l+1;
}

int main(){
    char ch[5] = "Fuad";
    int l = fun(ch, 0);
    printf("%d", l);

    return 0;
}