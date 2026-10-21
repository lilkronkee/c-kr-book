#include <stdio.h>

int main(void) {
    int c = getchar();
    int in_word = 0;

    while (c != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (in_word) {
                putchar('\n');
                in_word = 0;
            }
        } else {
            in_word = 1;
            putchar(c);
        }

        c = getchar();    
         
    }
    if (in_word) {
        putchar('\n');
    }
    return 0;
}