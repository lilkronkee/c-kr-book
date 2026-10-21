#include <stdio.h>

int main(void) {
        int c;
        int in_word = 0;
        int words = 0;

        c = getchar();
        while (c != EOF) {
                if (c == ' ' || c == '\t' || c == '\n') {
                        in_word = 0;
                } else if (in_word == 0) {
                        in_word = 1;
                        words++;
                }
                c = getchar();
        }
        printf("%d\n", words);
        return 0;
}
