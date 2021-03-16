#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char s1[] = "5676";
	char s2[10];

	printf("%u\n", ft_strlcpy(s2, s1, 0));
	printf("%s\n", s2);

//	printf("%lu\n", strlcpy(s2, s1, 3));
//	printf("%s\n", s2);
	return (0);
}
