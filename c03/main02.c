#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char s1[10] = " hyu";
	char s2[20] = "gyu";
	//char *dest = s2;
	//dest = ft_strcat(dest, s1);
	//printf("%s\n", dest);
	ft_strcat(s2, s1);
	printf("my_cat = %s\n", s2);
	//strcat(s2, s1);
	//printf("orginal_cat = %s\n", s2);
	return (0);
}
