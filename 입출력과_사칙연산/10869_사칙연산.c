#include <stdio.h>

int	main()
{
	unsigned int	a,b;

	scanf("%d %d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d\n", a+b, a-b, a*b, a/b, a%b);
	return 0;
}
