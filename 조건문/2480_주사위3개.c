#include <stdio.h>

int	main()
{
	int	a,b,c;

	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c)
		printf("%d", 10000 + 1000 * a);
	else if (a == b || a == c)
		printf("%d", 1000 + 100 * a);
	else if (b == c)
		printf("%d", 1000 + 100 * b);
	else
	{
		if (a >= b && a >= c)
			printf("%d", a * 100);
		else if (b >= a && b >= c)
			printf("%d", b * 100);
		else
			printf("%d", c * 100);
	}
	return 0;
}
