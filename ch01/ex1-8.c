#include <stdio.h>

int main(void) {
	int blanks = 0, tabs = 0, newlines = 0;
	int c;
	c = getchar();
	while (c != EOF) {
		if (c  == ' ') {
			blanks++;
		}
		if (c == '\t') {
			tabs++;
		}
		if (c == '\n') {
		newlines++;
		}
		c = getchar();
	}
	printf("blanks: %d, tabs: %d, newlines: %d\n", blanks, tabs, newlines);
	return 0;
}
