#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	card;
	int	result;
	int	*card_set;
	int	i,j,k;
	int	total;
	int	max = 0;

	i = 0;
	scanf("%d %d", &card, &result);
	card_set = (int *)malloc(sizeof(int) * card);
	while (i < card)
		scanf("%d", &card_set[i++]);
	i = 0;
	while (i < card - 2)
	{
		j = i + 1;
		while (j < card - 1)
		{
			k = j + 1;
			while (k < card)
			{
				total = card_set[i] + card_set[j] + card_set[k];
				if ((total > max) && (total <= result))
					max = total;
				k++;
			}
			j++;
		}
		i++;
	}
	printf("%d\n", max);
	free(card_set);
	return 0;
}
