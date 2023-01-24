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
	int	num;
	int	cnt;
	int	tmp;

	while (1)
	{
		scanf("%d", &num);
		if (num == 0)
			break ;
		tmp = 2 * num;
		cnt = 0;
		num += 1;
		while (num <= tmp)
		{
			if (ck_prime(num) == 1)
				cnt++;
			num++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
