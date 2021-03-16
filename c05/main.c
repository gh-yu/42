#include <stdio.h>

int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_recursive_power(int nb, int power);
int		ft_fibonacci(int);

int		main(void)
{
	printf("i_! : %d\n", ft_iterative_factorial(0));
	printf("r-! : %d\n", ft_recursive_factorial(0));
	printf("i_power : %d\n", ft_iterative_power(50, 5));
	printf("r_power : %d\n", ft_recursive_power(500, 5));
	printf("i_power : %d\n", ft_iterative_power(70, 0));
	printf("r_power : %d\n", ft_recursive_power(0, 0));
	printf("fibo : %d\n", ft_fibonacci(0));
	printf("fibo : %d\n", ft_fibonacci(1));
	printf("fibo : %d\n", ft_fibonacci(2));
	printf("fibo : %d\n", ft_fibonacci(6));
	return 0;
}

