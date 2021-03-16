#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main(void)
{
	char s1[] = "  \t-+--bc1a";
//	char s1[] = "-bc";
	char s2[] = "abcd";
	int num_base;

	num_base = ft_atoi_base(s1, s2);
	printf("%d\n", num_base);
	return (0);
}
