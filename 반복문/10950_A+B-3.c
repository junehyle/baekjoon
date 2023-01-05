#include <stdio.h>

int	main()
{
	int	times;
	int	a,b;

	scanf("%d", &times);
	while (0 < times)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
		times--;
	}
	return 0;
}
