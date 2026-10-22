#include <stdio.h>

int main(void) {
	int c = getchar();
	int prev = 0;

	while (c != EOF) {
		if (c == ' ' && prev == ' ') {

		} else {
			putchar(c);
		}
		prev = c;
		c = getchar();
	}
	return 0;
}
