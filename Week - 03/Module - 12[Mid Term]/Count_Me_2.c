#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
    int count = 0;
    while(scanf("%c", &ch) != EOF){
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
