#include <stdio.h>

main()
{
	int c, nb, nt, nl;

	nb = nt = nl = 0;
	while((c = getchar()) != EOF)
	{
		if (c == ' ')
			++nb;
		if (c == '\t')
			++nt;
		if (c == '\n')
			++nl;
	}
	printf("nb of blanks: %d\n", nb);
	printf("nb of tabs: %d\n", nt);
	printf("nb of newlines: %d\n", nl);
}