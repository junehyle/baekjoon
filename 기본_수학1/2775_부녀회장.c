#include <stdio.h>

3	1	5	15	35	70	126	210	330	495	715
2	1	4	10	20	35	56	84	120	165	220	
1	1	3	6	10	15	21	28	36	45	55
0	1	2	3	4	5	6	7	8	9	10

2	0	1	5	15	35	70	126	210	330	495
1	0	1	4	10	20	35	56	84	120	165
0	0	1	3	6	10	15	21	28	36	45

{1, 1, 1, 1, 1}


int	main()
{
	int	cases;
	int	floor;
	int	room_num;
	int	people[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int`	i,j,k;

	scanf("%d", &cases);
	while (cases > 0)
	{
		scanf("%d\n%d", &floor, &room_num);
		i = 0;
		j = 1;
		while (i < floor)
		{
			people[i++] = j++;
			
			
