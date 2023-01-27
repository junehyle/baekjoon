#include <stdio.h>

int	main()
{
	int	arr[10001][10001];
	int	i;
	int	cycle;
	int	x,y;
	int	a,b;
	int	cnt;

	i = 10000;
	while (i != 0)
	{
		cycle = 10000 - i;
		x = i;
		y = i;
		cnt = 0;
		while (-10000 + cycle <= -5000)
		{
			arr[x][y] = ((2 * i) * (2 * i)) + 1 + cnt;
			x--;
			cycle++;
			cnt++;
		}
		cnt = 0;
		cycle = i;
		x = i;
		while (-10000 + cycle <= -5000)
		{
			arr[x][y] = ((2 * i) * (2 * i)) + 1 - cnt;
			y--;
			cycle++;
			cnt++;
		}
		i--;
	}
	scanf("%d %d", &a, &b);
	printf("%d", arr[a][b]);
	return 0;
}
/*
	arr[-3][-2] = 36;
	arr[-2][-3] = 38;
	arr[-2][-2] = 17;
	
RULLDDRRRUUULLLLDDDDRRRR

    -3 -2 -1  0  1  2  3
    --------------------
-3 |37 36 35 34 33 32 31
-2 |38 17 16 15 14 13 30
-1 |39 18  5  4  3 12 29
 0 |40 19  6  1  2 11 28
 1 |41 20  7  8  9 10 27
 2 |42 21 22 23 24 25 26
 3 |43 44 45 46 47 48 49

-3 -3 2 0

37 36 35 34
38 17 16 15
39 18  5  4
40 19  6  1
41 20  7  8
42 21 22 23

-2 2 0 3

13 30
12 29
11 28
*/
