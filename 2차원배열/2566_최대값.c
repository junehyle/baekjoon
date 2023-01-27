#include <stdio.h>

int	main()
{
	int	a = 9, b = 9;
	int	i, j;
	int	arr[9][9];
	int	max = -1;
	int	raw,col;

	i = 0;
	while (i < a)
	{
		j = 0;
		while (j < b)
		{
			scanf("%d", &arr[i][j]);
			if (max < arr[i][j])
				max = arr[i][j];
			j++;
		}
		i++;
	}
	i = 0;
	while (i < a)
	{
		j = 0;
		while (j < b)
		{
			if (max == arr[i][j])
			{
				raw = i;
				col = j;
			}
			j++;
		}
		i++;
	}
	printf("%d\n", max);
	printf("%d %d\n", raw + 1, col + 1);
	return 0;
}
