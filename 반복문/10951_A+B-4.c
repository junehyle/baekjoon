#include <stdio.h>

int	main()
{
	int	a,b;
	int	ck_EOF;

	while (1)
	{
		ck_EOF = scanf("%d %d", &a, &b);
		if (ck_EOF != -1)
			printf("%d\n", a + b);
		else
			break ;
	}
	return 0;
}
/*
	scanf에서 EOF(control + z)를 사용하면 값은 -1이 나오기 때문에 if 조건문에 -1의 경우를 넣어주어 while문을 돌려주었다
*/
