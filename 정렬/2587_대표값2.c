#include <stdio.h>

int	main()
{
	int	arr[5];
	int	i;
	int	a;
	int	total = 0;
	int	tmp;

	i = 0;
	while (i < 5)
	{
		scanf("%d", &a);
		total += a;
		arr[i++] = a;
	}
	i = 0;
	while (i < 4)
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
	total /= 5;
	printf("%d\n", total);
	printf("%d\n", arr[2]);
	return 0;
}
