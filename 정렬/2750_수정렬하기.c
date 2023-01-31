#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	cases;
	int	*arr;
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
	while (i < cases - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	i = 0;
	while (i < cases)
	{
		printf("%d\n", arr[i++]);
	}
	free(arr);
	return 0;
}
