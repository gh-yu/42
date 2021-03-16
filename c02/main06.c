#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char a[] = "\t";

	printf("%d\n", ft_str_is_printable(a));

	return 0;
}
