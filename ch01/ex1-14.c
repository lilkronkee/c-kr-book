#include <stdio.h>

int main(void) {
    int c;
    int freq[128] = {0};

    while ((c = getchar()) != EOF) {
        freq[c]++;
    }
    for (int i = 0; i < 128; i++) {
        if (freq[i] > 0){
            if (i == '\n') {
                printf("\\n | ");
                for (int g = 0; g < freq[i]; g++) {
                    printf("*");
                }
                printf("\n");
            } else if (i == '\t') {
                printf("\\t | ");
                for (int g = 0; g < freq[i]; g++) {
                    printf("*");
                }
                printf("\n");
            } else if (i == ' ') {
                printf("' ' | ");
                for (int g = 0; g < freq[i]; g++) {
                    printf("*");
                }
                printf("\n");
            } else {
                printf("%c | ", i);
                for (int g = 0; g < freq[i]; g++) {
                    printf("*");
                }
                printf("\n");
            }
        }
    }
    return 0;
}