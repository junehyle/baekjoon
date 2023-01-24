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
	int	divide;

	divide = 2;
	scanf("%d", &num);
 	if (num == 1)
        	return 0;
	if (ck_prime(num) == 1)
	{
		printf("%d\n", num);
		return 0;
	}
	while (ck_prime(num) == 0)
	{
		if (num % divide != 0)
			divide++;
		if (num % divide == 0)
		{
			printf("%d\n", divide);
			num /= divide;
		}
		else
			divide++;
	}
	printf("%d\n", num);
	return 0;
}
