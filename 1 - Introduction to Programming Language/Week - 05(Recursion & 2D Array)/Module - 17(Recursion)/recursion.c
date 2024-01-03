#include<stdio.h>
#include<string.h>
int i = 1;
void fun(){
    printf("%d\n", i);
    i++;
    fun();

}
int main(){
    fun();


    return 0;
}