#include <stdio.h>
/*
int	main()
{
	int	a,c,i,j;
	int	b[1000000];
	int	tmp;

	i = 0;
	scanf("%d", &a);
	while(i < a)
		scanf("%d", &b[i++]);
	c = i - 1;
	while(c > 0)
	{
		j = 0;
		while(j < i - 1)
		{
			if(b[j] > b[j + 1])
			{
				tmp = b[j + 1];
				b[j + 1] = b[j];
				b[j] = tmp;
			}
			j++;
		}
		c--;
	}
	printf("%d %d\n", b[0], b[a - 1]);
	return 0;
} //버블정렬
*/

int	main()
{
	int	n, num;
	int	min, max;
	int	i;

	min = 1000000;
	max = -1000000;
	i = 0;
	scanf("%d", &n);
	while(i < n)
	{
		scanf("%d", &num);
		if(num > max)
			max = num;
		if(num < min)
			min = num;
		i++;
	}
	printf("%d %d\n", min, max);
	return 0;
}
