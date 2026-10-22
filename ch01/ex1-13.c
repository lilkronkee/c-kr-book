#include <stdio.h>

int main(void) {
    int c = getchar();
    int len = 0;
    while (c != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (len > 0) {
                printf("%d\n", len);
                len = 0;
            }
        } else {
            len++;
        }

        c = getchar();
    }
    if (len > 0) {
        printf("%d\n", len);
        len = 0;
    }
    return 0;
}