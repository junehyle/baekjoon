#include <stdio.h>

int	main()
{
	int	arr[100][100];
	int	i,j;
	int	cases;
	int	i_m,j_m;
	int	save = 0;

	scanf("%d", &cases);
	i = 0;
	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	while (cases)
	{
		scanf ("%d %d", &i, &j);
		i_m = i + 10;
		j_m = j + 10;
		i = i_m - 10;
		while (i < i_m)
		{
			j = j_m - 10;
			while (j < j_m)
			{
				arr[i][j] = 1;
				j++;
			}
			i++;
		}
		cases--;
	}
	i = 0;
	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			if (arr[i][j] == 1)
				save++;
			j++;
		}
		i++;
	}
	printf("%d", save);
	return 0;
}
