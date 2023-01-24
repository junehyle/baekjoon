#include <stdio.h>

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

	scanf("%d %d", &min, &max);
	while (min <= max)
	{
		if (ck_prime(min) == 1)
			printf("%d\n", min);
		min++;
	}
	return 0;
}
