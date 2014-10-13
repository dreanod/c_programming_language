#include <stdio.h>

main()
{
	int hist[26], i, c, k;

	for (i = 0; i < 26; i++)
		hist[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z')
			++hist[c-'a'];
	}

	for (i = 0; i < 26; i++) {
		printf("%c:", 'a'+i);
		for (k = 0; k < hist[i]; k++)
			printf("-");
		printf("\n");
	}
}