#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int		main(void)
{
	char s[] = " yu";
	
	printf("%d\n", ft_strlen(s));
	printf("%lu\n", strlen(s));
	return 0;
}
