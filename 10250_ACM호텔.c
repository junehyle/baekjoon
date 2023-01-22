#include <stdio.h>

void	room_num(int floor, int guest)
{
	int	floor_num_start;
	int	floor_num_end;

	floor_num_start = (guest % floor);
	if (floor_num_start == 0)
	{
		floor_num_start = floor;
		floor_num_end = guest / floor;
		printf("%d%02d\n", floor_num_start, floor_num_end);
		return ;
	}
	floor_num_end = guest / floor + 1;
	if (floor == 1 && guest == 1)
	{
		printf("101\n");
		return ;
	}	
	printf("%d%02d\n", floor_num_start, floor_num_end);
}

int	main()
{
	int	cases;
	int	floor;
	int	room;
	int	guest;

	scanf("%d", &cases);
	while (cases > 0)
	{
		scanf("%d %d %d", &floor, &room, &guest);
		room_num(floor, guest);
		cases--;
	}
	return 0;
}
