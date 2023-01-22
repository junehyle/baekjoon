/*
#include <stdio.h>

int	main()
{
	int	locate = 0;
	int	up;
	int	down;
	int	end;
	int	day = 1;

	scanf("%d %d %d", &up, &down, &end);
	while (locate < end)
	{
		locate += up;
		if (locate >= end)
		{
			day++;
			break ;
		}
		locate -= down;
		day++;
	}
	printf("%d\n", day - 1);
	return 0;
}
-> time out
#include <stdio.h>

int	main()
{
	int	locate = 0;
	int	up;
	int	down;
	int	end;
	int	one_day_move;
	int	day = 1;

	scanf("%d %d %d", &up, &down, &end);
	one_day_move = up - down;
	while (locate < end)
	{
		locate += one_day_move;
		if (locate < end && (locate + up) >= end)
		{
			day++;
			printf("%d\n", day);
			return 0;
		}
		day++;
	}
	printf("%d\n", day - 1);
	return 0;
}
-> time out
*/
#include <stdio.h>

int	main()
{
	int	up;
	int	down;
	int	end;
	int	one_day_move;
	int	day = 1;

	scanf("%d %d %d", &up, &down, &end);
	one_day_move = up - down;
	day += (end - up) / one_day_move;
	if ((end - up) % one_day_move)
		day++;
	printf("%d\n", day);
	return 0;
}
