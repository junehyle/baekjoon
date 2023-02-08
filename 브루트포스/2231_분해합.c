#include <stdio.h>
#include <stdlib.h>

int	leng(int num)
{
	int	i;

	i = 1;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

int	num_sum(int num)
{
	static int	sum;

	if (num >= 10)
	{
		num_sum(num / 10);
		num_sum(num % 10);
	}
	else
		sum += num;
	return (sum);
}

int	main()
{
	int	i, j;
	int	sum;
	int	tmp = 0;
	int	num;

	scanf("%d", &num);
	j = 9 * leng(num);
	i = num - j;
	while (i)
	{
		sum = num_sum(i);
		if (num == sum + i - tmp)
			break ;
		tmp = sum;
		i++;
	}
	printf("%d", i);
	return 0;
}
