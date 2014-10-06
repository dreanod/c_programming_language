#include <stdio.h>

/* count characters in input; 1st version */
main()
{
	long nc;

	nc = 0;
	printf("%ld\n", nc);
	while (getchar() != EOF)
		printf("evaluated\n");
		++nc;
	printf("%ld\n", nc);
}