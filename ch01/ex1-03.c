#include <stdio.h>

int main(void) {
	int fahr = 0;

	printf("%3c %6c\n", 'F', 'C');

	while (fahr <= 300) {
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0 * (fahr - 32)));
		fahr = fahr + 20;
	}
	return 0;
}
