#include <stdio.h>

int	main()
{
	int	a,b;
	int	c[1000];
	int	i = 0;
	int	i2,i3;
	int	total_score = 0;
	double	result,result2;
	int	man;

	scanf("%d", &a);
	while (i < a)
	{
		i2 = 0;
		i3 = 0;
		total_score = 0;
		man = 0;
		scanf("%d", &b);
		while (i2 < b)
		{
			scanf("%d", &c[i2]);
			total_score += c[i2];
			i2++;
		}
		result = (double)total_score / (double)b;
		while (i3 < b)
		{
			if (c[i3] > result)
				man++;
			i3++;
		}
		result2 = (double)man /(double)b * 100;
		printf("%.3f%%", result2);
		if (i == a - 1)
			break ;
		printf(("\n"));
		i++;
	}
	return 0;
}
