#include <stdio.h>

extern	void	ft_swap(int *a,int *b);

int		main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}
