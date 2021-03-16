#include <stdio.h>
#include <string.h>

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char s1[] = " is my name";
	char s2[50] = "gyu";

	unsigned int total_len = ft_strlcat(s2, s1, -5);
	printf("my_strlcat : %s\n", s2);
	printf("total_len : %d\n", total_len);

//	unsigned int len = strlcat(s2, s1, -5);
//	printf("orgin_strlcat : %s\n", s2);
//	printf("len : %d\n", len);


	return (0);
}
