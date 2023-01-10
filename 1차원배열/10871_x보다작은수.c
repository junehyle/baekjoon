#include <stdio.h>

int	main()
{
	int	a,b,i;
	int	c[10000];

	i = 0;
	scanf("%d %d", &a, &b);
	while(i < a)
		scanf("%d", &c[i++]);
	i = 0;
	while(i < a)
	{
		if (c[i] < b)
			printf("%d ", c[i]);
		i++;
	}
	printf("\n");
	return 0;
}		
