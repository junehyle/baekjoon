#include <stdio.h>

int	self_num(int n)
{
	int tmp = n; 
	
	while (n > 0)
	{
		tmp += n % 10;
		n /= 10;
	}
	return (tmp);
}

int	main()
{
	int	arr[10001];
	int	i = 1;
	int	i2 = 1;
	int	ck;

	while (i < 10001)
	{
		ck = self_num(i);
		if (ck < 10001)
			arr[ck] = 1;
		i++;
	}
	while (i2 < 10001)
	{
		if (arr[i2] != 1)
			printf("%d\n", i2);
		i2++;
	}
	return 0;
}
