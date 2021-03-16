#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char str1[] = "gyuismyname";
	char str2[50];
	
	char *s = str2;
	s = ft_strncpy(s, str1, 5);
	printf("%s\n", s);
	//ft_strncpy(str2, str1, 5);
	printf("%s\n", ft_strncpy(str2, str1, 5));
	printf("%s\n", strncpy(str2, str1, 5));
	return 0;
}
