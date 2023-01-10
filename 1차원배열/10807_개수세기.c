#include <stdio.h>

int	main()
{
	int	a,c,i;
	int	b[100];
	int	result;

	scanf("%d", &a);
	i = 0;
	result = 0;
	while (i < a)
		scanf("%d", &b[i++]);
	scanf("%d", &c);
	i = 0;
	while (i < a)
	{
		if (c == b[i])
			result++;
		i++;
	}
	printf("%d\n", result);
	return 0;
}
