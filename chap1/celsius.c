#include <stdio.h>

main()
{
	float celsius, fahr;
	float upper, lower, step;

	lower = -20.0;
	upper = 150.0;
	step = 10.0;

	celsius = lower;
	printf("%3s %6s\n", "C", "F");
	while (celsius <= upper)
	{
		fahr = 9.0/5.0 * celsius + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}