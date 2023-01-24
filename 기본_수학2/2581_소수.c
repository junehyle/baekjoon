#include <stdio.h>
#include <stdlib.h>

int	ck_prime(int num)
{
	int	i = 2;

	if (num == 1)
		return (0);
	if (num == 2)
		return (1);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	int	min,max;
	int	cnt;
	int	tmp;
	int	*arr;
	int	i;
	int	total;

	total = 0;
	i = 0;
	cnt = 0;
	scanf("%d", &min);
	scanf("%d", &max);
	tmp = min;
	while (tmp <= max)
	{
		if (ck_prime(tmp) == 1)
			cnt++;
		tmp++;
	}
	arr = (int *)malloc(sizeof(int) * (cnt + 1));
	arr[cnt] = -2;
	while (min <= max)
	{
		if (ck_prime(min) == 1)
			arr[i++] = min;
		min++;
	}
	i = 0;
	while (arr[i] != -2)
		total += arr[i++];
	if (total != 0)
	{
		printf("%d\n", total);
		printf("%d\n", arr[0]);
	}
	else
		printf("-1\n");
	free(arr);
	return 0;
}
	
