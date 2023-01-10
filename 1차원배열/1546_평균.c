#include <stdio.h>

int	main()
{
	int	sub;
	int	i = 0;
	int	score[1000];
	int	total_score = 0;
	double	max = 0;
	double	result;

	scanf("%d", &sub);
	while(i < sub)
	{	
		scanf("%d", &score[i]);
		total_score += score[i];
		i++;
	}
	while(i > 0)
	{
		--i;
		if(score[i] > max)
			max = score[i];
	}
	result = total_score / max / (double)sub * 100;
	printf("%f", result);
	return 0;
}
