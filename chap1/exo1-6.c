#include <stdio.h>

main() {
	int c;

	while (((c = getchar()) != EOF) == 1) {
		printf("1\n");
	}
	printf("0\n");
}