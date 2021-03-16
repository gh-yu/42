#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
int        ft_str_is_alpha(char *str);
int        ft_str_is_numeric(char *str);
int        ft_str_is_lowercase(char *str);
int        ft_str_is_uppercase(char *str);
int        ft_str_is_printable(char *str);
char    *ft_strupcase(char *str);
char    *ft_strlowcase(char *str);
char    *ft_strcapitalize(char *str);
int        ft_strlcpy(char *dest, char *src, unsigned int size);
void    ft_putstr_non_printable(char* str);
void    *ft_print_memory(void* addr, unsigned int size);

int main(void)
{
    char     *src;
    char     dest[12];
    char     *str_valid;
    char     *str_invalid;
    char    *str_base;
    char    str_upper[6];
    char    str_lower[6];
    char    *str_base1;
    char    *string;
    int     index;
    char    cap[100];

	/*char str1[] = 
    {
			0x42, 0x6f, 0x6e, 0x6a, 0x6f, 0x75, 0x72, 0x20, 0x6c, 0x65, 0x73, 0x20, 0x61, 0x6d, 0x69, 0x6e,
			0x63, 0x68, 0x65, 0x73, 0x09, 0x0a, 0x09, 0x63, 0x20, 0x20, 0x65, 0x73, 0x74, 0x20, 0x66, 0x6f,
			0x75, 0x09, 0x74, 0x6f, 0x75, 0x74, 0x09, 0x63, 0x65, 0x20, 0x71, 0x75, 0x20, 0x6f, 0x6e, 0x20,
			0x70, 0x65, 0x75, 0x74, 0x20, 0x66, 0x61, 0x69, 0x72, 0x65, 0x20, 0x61, 0x76, 0x65, 0x63, 0x09,
			0x0a, 0x09, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x5f, 0x6d, 0x65, 0x6d, 0x6f, 0x72, 0x79, 0x0a, 0x0a,
			0x0a, 0x09, 0x6c, 0x6f, 0x6c, 0x2e, 0x6c, 0x6f, 0x6c, 0x0a, 0x20, 0x00, 0xff, 0xff, 0xff, 0xff,
			0xfe, 0x00, 0x00, 0x00
	};
	
	char str[] = {
                '\x42', '\x6f', '\x6e', '\x6a', '\x6f', '\x75', '\x72', '\x20',
                '\x6c', '\x65', '\x73', '\x20', '\x61', '\x6d', '\x69', '\x6e',
                '\x63', '\x68', '\x65', '\x73', '\x09', '\x0a', '\x09', '\x63',
                '\x20', '\x20', '\x65', '\x73', '\x74', '\x20', '\x66', '\x6f',
                '\x75', '\x09', '\x74', '\x6f', '\x75', '\x74', '\x09', '\x63',
                '\x65', '\x20', '\x71', '\x75', '\x20', '\x6f', '\x6e', '\x20',
                '\x70', '\x65', '\x75', '\x74', '\x20', '\x66', '\x61', '\x69',
                '\x72', '\x65', '\x20', '\x61', '\x76', '\x65', '\x63', '\x09',
                '\x0a', '\x09', '\x70', '\x72', '\x69', '\x6e', '\x74', '\x5f',
                '\x6d', '\x65', '\x6d', '\x6f', '\x72', '\x79', '\x0a', '\x0a',
                '\x0a', '\x09', '\x6c', '\x6f', '\x6c', '\x2e', '\x6c', '\x6f',
                '\x6c', '\x0a', '\x20', '\x00'
        };
    */
    printf("= %d =========\n", 0);
    src = "Hello World";
    printf("base   : %s\n", src);
    strcpy(dest, src);
    printf("cpy    : %s\n", dest);
    ft_strcpy(dest, src);
    printf("ft_cpy : %s\n", dest);
    printf("\n\n");
    
    printf("= %d =========\n", 1);
    src = "src";
	char dest1[10] = "12345";
    printf("base   : %s\n", src);
    strncpy(dest1, src, 8);
    
    printf("cpy    : %s\n", dest1);
    for(int i = 0; i < 10; i++)
        printf("%d ", dest1[i]);
    printf("\n");
    
    char dest2[10] = "12345";
    ft_strncpy(dest2, src, 8);
    printf("ft_cpy : %s\n", dest2);
	for(int i = 0; i < 10; i++)
		printf("%d ", dest2[i]);
	printf("\n");
    printf("\n\n");
    
    printf("= %d =========\n", 2);
    str_valid = "Hello";
    str_invalid = "Hell0";
    printf("should be 1: %d\n", ft_str_is_alpha(str_valid));
    printf("should be 0: %d\n", ft_str_is_alpha(str_invalid));
    printf("\n\n");
    
    printf("= %d =========\n", 3);
    str_valid = "123456";
    str_invalid = "123A56";
    printf("should be 1: %d\n", ft_str_is_numeric(str_valid));
    printf("should be 0: %d\n", ft_str_is_numeric(str_invalid));
    printf("\n\n");
    
    printf("= %d =========\n", 4);
    str_valid = "hello";
    str_invalid = "hellO";
    printf("should be 1: %d\n", ft_str_is_lowercase(str_valid));
    printf("should be 0: %d\n", ft_str_is_lowercase(str_invalid));
    printf("\n\n");
    
    printf("= %d =========\n", 5);
    str_valid = "HELLO";
    str_invalid = "HELLo";
    printf("should be 1: %d\n", ft_str_is_uppercase(str_valid));
    printf("should be 0: %d\n", ft_str_is_uppercase(str_invalid));
    printf("\n\n");
    
    printf("= %d =========\n", 6);
    str_valid = "Hell0";
    str_invalid = "hello\7F";
    printf("should be 1: %d\n", ft_str_is_printable(str_valid));
    printf("should be 0: %d\n", ft_str_is_printable(str_invalid));
    printf("\n\n");
    
    printf("= %d =========\n", 7);
    str_base = "heLl0";
    index = 0;
    while (index < 6)
    {
        str_upper[index] = str_base[index] + 0;
        index++;
    }
    ft_strupcase(&str_upper[0]);
    printf("should be normal    : %s\n", str_base);
    printf("should be upper case: %s\n", str_upper);
    printf("\n\n");
    
    printf("= %d =========\n", 8);
    str_base = "HELl0";
    index = 0;
    while (index < 6)
    {
        str_lower[index] = str_base[index] + 0;
        index++;
    }
    ft_strlowcase(&str_lower[0]);
    printf("should be normal    : %s\n", str_base);
    printf("should be lower case: %s\n", str_lower);
    printf("\n\n");
    
    printf("= %d =========\n", 9);
    str_base = "Vk_(7X)Vmf#H'Fk?>8j@} /7VVxh3(X{6)Xb\0";
    for(index = 0; str_base[index] != '\0'; index++)
        cap[index] = str_base[index];
    cap[index] = '\0';
    ft_strcapitalize(cap);
    printf("base         : %s\n", str_base);
    printf("changed      : %s\n", cap);

    str_base1 = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\0";
    for(index = 0; str_base1[index] != '\0'; index++)
        cap[index] = str_base1[index];
    cap[index] = '\0';
    ft_strcapitalize(cap);
    printf("base         : %s\n", str_base1);
    printf("changed      : %s\n", cap);
    printf("\n\n");
    
    printf("= %d =========\n", 10);
    char text1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char text1_ft_strlcpy[100];
    char text1_strlcpy[100];
    printf("ft_strlcpy: %d %s\n", ft_strlcpy(text1_ft_strlcpy, text1, 100), text1_ft_strlcpy);
    printf("strlcpy   : %lu %s\n", strlcpy(text1_strlcpy, text1, 100), text1_strlcpy);
    printf("diff: %d\n",strcmp(text1_ft_strlcpy, text1_strlcpy));
    printf("\n");
    
    char text2[] = "";
    char text2_ft_strlcpy[100];
    char text2_strlcpy[100];
    printf("ft_strlcpy: %d %s\n", ft_strlcpy(text2_ft_strlcpy, text2, 0), text2_ft_strlcpy);
    printf("strlcpy   : %lu %s\n", strlcpy(text2_strlcpy, text2, 0), text2_strlcpy);
    printf("diff: %d\n",strcmp(text2_ft_strlcpy, text2_strlcpy));
    printf("\n");
    
    char text3[] = "a";
    char text3_ft_strlcpy[100];
    char text3_strlcpy[100];
    printf("ft_strlcpy: %d %s\n", ft_strlcpy(text3_ft_strlcpy, text3, 50), text3_ft_strlcpy);
    printf("strlcpy   : %lu %s\n", strlcpy(text3_strlcpy, text3, 50), text3_strlcpy);
    printf("diff: %d\n",strcmp(text3_ft_strlcpy, text3_strlcpy));
    printf("\n");
    
    printf("= %d =========\n", 11);
    string = "Coucou\ntu vas bien ?";
    char a[4];
	a[0] = -1;
	a[1] = -2;
	a[2] = -3;
	a[3] = '\0';
	printf("%s\n", a);
    ft_putstr_non_printable(a);
    printf("\n");
    printf("\n\n");
/*    
    printf("= %d =========\n", 12);

    ft_print_memory(str1, sizeof(str1));
	printf("\n");
    
    ft_print_memory(str, sizeof(str));
	printf("\n");
    
    char *a = "123";
    ft_print_memory(a, 0);

    printf("\n\n");
 */   
    return (0);
}
