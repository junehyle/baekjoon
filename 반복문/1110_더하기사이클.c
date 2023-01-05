#include <stdio.h>

int	main()
{
	int	a;
	int	i;
	int	b,c;
	int	tmp;

	i = 1;
	scanf("%d", &a);
	b = a / 10;
	c = a % 10;
	while(a != (c * 10) + (b + c) % 10)
	{
		tmp = b;
		b = c;
		c = (tmp + c) % 10;
		i++;
	}
	printf("%d\n", i);
	return 0;
}
