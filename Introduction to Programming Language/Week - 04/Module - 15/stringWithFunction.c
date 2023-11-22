#include<stdio.h>
#include<string.h>

void fun(char name[]){
    printf("%s\n", name);
    int ln = strlen(name);
    printf("%d", ln);
}
int main(){
    char name[20] = "Fuad";
    fun(name);
    


    return 0;
}