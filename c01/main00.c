#include <stdio.h>

extern	void	ft_ft(int *nbr);

int		main(void)
{
	int num;

	num = 0;
	ft_ft(&num);
	printf("%d\n", num);
	return 0;
}
