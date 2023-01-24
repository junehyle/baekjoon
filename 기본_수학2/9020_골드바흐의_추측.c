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

int main()
{
	int	cases;
	int	num, i, half;

	scanf("%d", &cases);
	i = 0;
	while (i < cases)
	{
		scanf("%d", &num);
		half = num / 2;
		while (half <= num)
		{
			if (ck_prime(half) == 1)
			{
				if (ck_prime(num - half) == 1)
				break;
			}
			half++;
		}
		printf("%d %d\n", num - half, half);
		i++;
	}
	return 0;
}

/*
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
	int	start;
	int	tmp;
	int	a,b;

	scanf ("%d", &cases);
	while (cases > 0)
	{
		start = 2;
		scanf("%d", &num);
		if (num <= 3 || num % 2 == 1)
		{
			cases--;
			continue ;
		}
		while (start <= num / 2)
		{
			tmp = num;
			if (ck_prime(start) == 1)
			{
				while (tmp >= start)
				{
					if (ck_prime(tmp) == 0)
					{
						tmp--;
						continue ;
					}
					if (tmp + start == num)
					{
						a = start;
						b = tmp;
						break ;
					}
					tmp--;
				}
			}
			start++;
		}
		printf("%d %d\n", a, b);
		cases--;
	}
	return 0;
}
*/
