#include <stdio.h>

int	main()
{
	int	cnt;
	int	i;
	int	tmp1,tmp2;

	scanf("%d", &cnt);
	i = 0;
	while (i < cnt)
	{
		tmp1 = cnt - 2;
		tmp2 = i;
		while (tmp1 >= i)
		{
			printf(" ");
			tmp1--;
		}
		while (tmp2 >= 0)
		{
			printf("*");
			tmp2--;
		}
		i++;
		printf("\n");
	}
	return 0;
}
