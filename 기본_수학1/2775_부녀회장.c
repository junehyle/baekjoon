#include <stdio.h>
/*
4|	1	6	21	56	126	252	462	792	1287	2002
3|	1	5	15	35	70	126	210	330	495	715
2|	1	4	10	20	35	56	84	120	165	220	
1|	1	3	6	10	15	21	28	36	45	55
0|	1	2	3	4	5	6	7	8	9	10

4|	5	15	35	70	126	210	330	495	715
3|	4	10	20	35	56	84	120	165	220
2|	3	6	10	15	21	28	36	45	55
1|	2	3	4	5	6	7	8	9	10
0|	1	1	1	1	1	1	1	1	1	

3|	0	1	6	21	55	126	252	462	792	1287
2|	0	1	5	15	35	70	126	210	330	495
1|	0	1	4	10	20	35	56	84	120	165
0|	0	1	3	6	10	15	21	28	36	45
	1	2 	3 	4	5	6	7	8	9	10
*/
int	main()
{
	int	arr[15][15] = {0,};
	int	cases,floor,num;
	int	i;
	int	j;

	i = 0;
	while(i < 15)
	{
		arr[0][i] = i;
		i++;
	}
  
	i = 1;
	while (i < 15)
	{
		j = 1;
		while (j < 15)
		{
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			j++;
		}
		i++;
	}

	scanf("%d", &cases);
	i = 0;
	while (i < cases)
	{
		scanf("%d\n%d", &floor, &num);
		cases--;
		printf("%d\n", arr[floor][num]);
	}
	return 0; 
}
		
