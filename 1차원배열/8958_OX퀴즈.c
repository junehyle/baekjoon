#include <stdio.h>

int	main()
{
	int	line;
	int	i = 0;
	char	arr[80];
	int	total_score;
	int	score;
	int	arr_i;

	total_score = 0;
	score = 1;
	arr_i = 0;
	scanf("%d", &line);
	while(i < line)
	{
		total_score = 0;
		arr_i = 0;
		score = 1;
		scanf("%s", arr);
		while(arr[arr_i])
		{
			if(arr[arr_i] == 'O')
				total_score += score++;
			else
				score = 1;
			arr_i++;
		}
		printf("%d\n", total_score);
		i++;
	}
}
