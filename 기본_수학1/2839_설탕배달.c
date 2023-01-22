#include <stdio.h>
/*
3 	4	5	6	7	8	9	10	11	12	13	14
1	-1	1	2	-1	2	3	2	3	4	3	4
1/0		0/1	2/0		1/1	3/0	0/2	2/1	4/0	1/2	3/1

15	16	17	18	19	20	21	22	23	24
3	4	5	4	5	4	5	6	5	6
0/3	2/2	4/1	1/3	3/2	0/4	2/3	4/2	1/4	3/3
*/
int	main()
{
	int	i,j;
	int	sum;
	int	cycle;

	scanf("%d", &sum);
	cycle = ((sum / 8) + 1) * 2;
	if (sum % 8 == 0)
		cycle -= 2;
	i = 0;
	j = 0;
	while ((3 * i) + (5 * j) != sum)
	{	
		j = 0;
		if (i > cycle || (3 * i) + (5 * j) == sum)
			break ;
		while ((3 * i) + (5 * j) != sum)
		{
			if (i + j > cycle || (3 * i) + (5 * j) == sum)
				break ;	
			j++;
		}
		if ((3 * i) + (5 * j) == sum)
			break ;
		i++;
	}
	if ((3 * i) + (5 * j) == sum)
	{
		printf("%d\n", i + j);
		return 0;
	}
	printf("-1\n");
	return 0;
}
