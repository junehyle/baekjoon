#include <stdio.h>
#include <stdlib.h>

int	int_strlen(int num)
{
	static int	len;

	if (num >= 10)
	{
		len++;
		int_strlen(num / 10);
	}
	else
		len++;
	return (len);
}

int	*put_num_in_arr(int num)
{
	int	*arr;
	int	size;
	int	i = 0;

	size = int_strlen(num);
	arr = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		arr[i++] = num % 10;
		num /= 10;
	}
	return (arr);
}

int	wrd_end(int num)
{
	int	i = 0;
	int	*arr;
	int	cnt = 0;
	int	size;
	int	j;

	size = int_strlen(num);
	arr = put_num_in_arr(num);
	while (i < size)
	{
		j = 0;
		cnt = 0;
		if (arr[i] == 6)
		{
			while (arr[i + j] == 6)
			{
				j++;
				cnt++;
			}
			if (cnt >= 3)
				return (1);
		}
		i++;
	}
	return (0);
}

int	main()
{
	int	num;
	int	i = 0;
	int	result = 666;

	scanf("%d", &num);
	while (i < num)
	{
		if (wrd_end(result))
			i++;
		if (i == num)
			break ;
		result++;
	}
	printf("%d\n", result);
	return 0;
}
