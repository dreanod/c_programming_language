#include <stdio.h>

#define IN  1
#define OUT 0
#define MAX_SIZE 10

main()
{
	int lengths[MAX_SIZE], state, c, i, k, count;

	for (i = 0; i < MAX_SIZE; i++)
		lengths[i] = 0;

	state = OUT;
	count = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) {
				state = OUT;
				if (count <= MAX_SIZE) 
					++lengths[count - 1];
				count = 0;	
			}
		}
		else {
			++count;
			state = IN;
		}
	}

	for (i = 0; i < MAX_SIZE; i++) {
		printf("%3d:", i+1);
		for (k = 0; k < lengths[i]; k++)
			printf("-");
		printf("\n");
	}
}