#include <stdio.h>

int	main ()
{
	int	a, b;
	int	z, x, c;

	scanf("%d %d", &a, &b);
	z = b / 100;
	x = b / 10 % 10;
	c = b % 10;
	printf("%d\n%d\n%d\n%d\n", a * c, a * x, a * z, a * b);
	return 0;
}
