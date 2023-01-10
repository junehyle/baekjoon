#include <stdio.h>

int	main()
{
	int	arr[30];
	int	i;
	int	num;
	int	result[2];
	int	ck = 0;

	num = 1;
	i = 0;
	while (i < 28)
		scanf("%d", &arr[i++]);
	while(num <= 30)
	{
		i = 0;
		while(i < 28)
		{
			if(arr[i] == num)
				break ;
			i++;
		}
		if(i == 28)
			result[ck++] = num;
		num++;
	}
	if (result[0] > result[1])
		printf("%d\n%d\n", result[1], result[0]);
	else	
		printf("%d\n%d\n", result[0], result[1]);
	return 0;
}
