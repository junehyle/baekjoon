#include <stdio.h>

int	main()
{
	int	a,b;
	int	s1[100][100];
	int	s2[100][100];
	int	i, j;
	int	i2, j2;

	scanf("%d %d", &a, &b);
	i = 0;
	while (i < a)
	{
		j = 0;
		while (j < b)
		{
			scanf("%d", &s1[i][j]);
			j++;
		}
		i++;
	}
	i2 = 0;
	while (i2 < a)
	{
		j2 = 0;
		while (j2 < b)
		{
			scanf("%d", &s2[i2][j2]);
			j2++;
		}
		i2++;
	}
	i = 0;
	while (i < a)
	{
		j = 0;
		while (j < b)
		{
			s1[i][j] += s2[i][j];
			printf("%d ", s1[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;			
}
