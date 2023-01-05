#include <stdio.h>

int	main()
{
	int	cnt;
	int	i;
	int	tmp;

	scanf("%d", &cnt);
	i = 0;
	while (i < cnt)
	{
		tmp = i;
		while (tmp >= 0)
		{
			printf("*");
			tmp--;
		}
		i++;
		printf("\n");
	}
	return 0;
}
