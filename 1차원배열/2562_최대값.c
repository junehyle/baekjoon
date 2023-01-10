#include <stdio.h>

int	main()
{
	int	arr[9];
	int	max;
	int	max_i;
	int	i;

	max = 0;
	i = 0;
	while (i < 9)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
			max_i = i;
		}
		i++;
	}
	printf("%d\n%d\n", max, max_i + 1);
	return 0;
}
