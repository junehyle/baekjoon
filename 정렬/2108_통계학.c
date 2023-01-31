#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	cases;
	int	i, j, k;
	int	a;
	int	total = 0;
	int	*arr;
	int	*arr2;
	int	min = 4001;
	int	max = -4001;
	int	diff;
	int	total_div;
	int	tmp;
	int	frequent;
	int	frequent_idx = 0;
	int	save_idx = 0;

	i = 0;
	scanf("%d", &cases);
	arr = (int *)malloc(sizeof(int) * cases);
	arr2 = (int *)malloc(sizeof(int) * cases);
	while (i < cases)
	{
		scanf("%d", &a);
		total += a;
		if (min > a)
			min = a;
		if (max < a)
			max = a;
		arr[i] = a;
		i++;
	}
	i = 0;
	while (i < cases - 1)
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
	i = 0;
	total_div = total / cases;
	if (total_div >= 0)
	{
		if (total % cases > cases / 2)
			total_div += 1;
	}
	else
	{
		if ((-total) % cases > cases / 2)
			total_div -= 1;
	}
	printf("%d\n", total_div);
	diff = max - min;
	while (i < cases - 1)
	{
		j = 1;
		frequent = 0;
		while (arr[i] == arr[i + j])
		{
			frequent += 1;
			j++;
		}
		arr2[i] = frequent;
		i += j;
	}
	printf("%d\n", total_div);
	i = 0;
	while (i < cases)
	{
		if (frequent_idx < arr2[i])
			frequent_idx = arr2[i];
		i++;
	}
	i = 0;
	while (i < cases)
	{
		if (frequent_idx == arr2[i])
		{
			save_idx += 1;
			tmp = i;
		}
		i++;
	}
	k = 0;
	if (save_idx >= 2)
	{
		while (k < cases)
		{
			if (arr2[k] == frequent_idx)
			{	
				k++;
				while (arr2[k] != frequent_idx)
					k++;
				break ;
			}
			else
				k++;
		}
	}
	i = k;
	if (save_idx == cases)
		i = 1;
	if (cases == 1)
		i = 0;
	if (save_idx == 1)
		i = tmp;
	printf("%d\n", arr[i]);
	printf("%d\n", diff);
	free(arr);
	free(arr2);
	return 0;
}
