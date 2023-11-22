#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    while (t--) {
        int ca[3] = {0};
        //ca[0] = capital
        //ca[1] = small
        //ca[2] = digit

        char ch;
        while (scanf("%c", &ch) != EOF) {
            if (ch == '\n') {
                break;
            }

            int v = ch;
            // printf("%d\n", v);

            if (v >= 97 && v <= 122) {
                ca[1]++;
            } else if (v >= 65 && v <= 90) {
                ca[0]++;
            } else if (v >= 48 && v <= 57) {
                ca[2]++;
            }
        }
        printf("%d %d %d\n", ca[0], ca[1], ca[2]);
    }

    return 0;
}
