
#include <stdio.h>
char* ft_strupcase(char *str);
int main(void)
{
    char text1[] = "asdfasdf";
	printf("%s\n", ft_strupcase(text1));
    char text2[] = "ASDFasdf";
	printf("%s\n", ft_strupcase(text2));
    char text3[] = "ASSDDGBZAQ";
	printf("%s\n", ft_strupcase(text3));
    char text4[] = "asdf1145aa,";
	printf("%s\n", ft_strupcase(text4));
    char text5[] = "aa aa";
	printf("%s\n", ft_strupcase(text5));
    char text6[] = "2745!!AA";
	printf("%s\n", ft_strupcase(text6));
    char text7[] = "AaaAaaAaaZzzZzz";
	printf("%s\n", ft_strupcase(text7));
    return 0;
}

