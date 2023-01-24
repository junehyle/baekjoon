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
	int	cases;
	int	num;
	int	cnt;

	cnt = 0;
	scanf("%d", &cases);
	while (cases)
	{
		scanf("%d", &num);
		if (ck_prime(num) == 1)
			cnt++;
		cases--;
	}
	printf("%d\n", cnt);
	return 0;
}
