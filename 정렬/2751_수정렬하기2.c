#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	cases;
	int	*arr;
	int	cycle = 0;
	int	i = 0;
	int	a;
	int	tmp;

	scanf("%d", &cases);
	arr = (int *)malloc(sizeof(int) * cases);
	while (i < cases)
	{
		scanf("%d", &a);
		arr[i++] = a;
	}
	i = 0;
	while (cycle < cases - 1)
	{
		i = 0;
		while (i < cases -1)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
					arr[i + 1] = tmp;
			}
			i++;
		}
		cycle++;
	}
	i = 0;
	while (i < cases)
		printf("%d\n", arr[i++]);
	free(arr);
	return 0;
}
