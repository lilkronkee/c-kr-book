#include <stdio.h>

int main(void) {

	int cel = -20;

	printf("%3c %8c\n",'C', 'F');

	while (cel <= 100) {
		printf("%3d %8.1f\n", cel, (9.0 / 5.0 * cel + 32));
		cel = cel + 10;
	}
	return 0;
}
