#include <stdio.h>

int	main()
{
	int	cases;
	int	start;
	int	end;
	int	gap;
	int	i;
	
	scanf("%d", &cases);
	while (cases > 0)
	{
		scanf("%d %d", &start, &end);
		gap = end - start;
		i = 1;
		while (gap > 2 * i)
		{
			gap -= 2 * i;
			i++;
		}
		if ((gap - 1) / i == 0)
			printf("%d\n", 2 * i - 1);
		else
			printf("%d\n", 2 * i);
		cases--;
	}
	return 0;
}
/*
int	main()
{
	int	cases;
	int	start,end;
	int	gap;
	int	res;
	int	i;

	scanf("%d", &cases);
	while (cases > 0)
	{
		scanf("%d %d", &start, &end);
		gap = end - start;
		i = 0;
		while (i * i < gap)
			i++;
		printf("%d\t", i);
		res = 2 * i - 1;
		i -= 1;
		if (gap <= i * i + i)
			res -= 1;
		printf("%d\n", res);
		cases--;
	}
	return 0;
}

int	main()
{
	int	cases;
	int	start,end;
	int	gap;
	int	ck_cycle = 0;
	int	i = 1;
	int	res;

	scanf("%d", &cases);
	while (cases > 0)
	{
		scanf("%d %d", &start, &end);
		gap = end - start;
		while (ck_cycle <= gap)
			ck_cycle += 2 * i++;
		res = (i - 1) * 2;
		if (gap  <= ck_cycle - i + 1)
			res -= 1;
		printf("%d\n", res);
		cases--;
	}
	return 0;
}

1	1	2	2	3	3	4	4	5	5
1	2	3	4	5	6	7	8	9	10

1 -> 1 / 2
2 -> 3,4 / 5,6
3 -> 7,8,9 / 10,11,12
4 -> 13,14,15,16 / 17,18,19,20
5 -> 21,22,23,24,25 / 26,27,28,29,30
2
6
12
20
30

1	1			1-1
2	11			2--1
3	111			3---2
4	121			3
5	1211			4----2
6	1221			4
7	12211			5-----3
8	12221			5
9	12321			5
10	123211			6------3
11	123221			6
12	123321			6
13	1233211			7-------4
14	1233221			7
15	1233321			7
16	1234321			7
17	12343211		8--------4
18	
		
25	123454321	
19				
20				
21				----------5
*/
