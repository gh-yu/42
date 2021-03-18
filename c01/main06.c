#include <stdio.h>

extern	int		ft_strlen(char *str);

int		main(void)
{
	char s[] = "24jk  ";

	printf("%d\n", ft_strlen(s));
	return 0;
}
