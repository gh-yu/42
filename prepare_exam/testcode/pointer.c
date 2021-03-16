#include <stdio.h>

int		main(void)
{
	int num;
	int	*p = &num;

	*p = 2;
	
	printf("%d", num);
	return 0;
}
