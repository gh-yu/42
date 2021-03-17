#include <stdio.h>

int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_recursive_power(int nb, int power);
int		ft_fibonacci(int);
int		ft_sqrt(int);

//int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);

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
	printf("sqrt : %d\n", ft_sqrt(0));
	printf("sqrt : %d\n", ft_sqrt(3));
	printf("sqrt : %d\n", ft_sqrt(9));
	printf("sqrt : %d\n", ft_sqrt(16));
//	printf("prime : %d\n", ft_is_prime(6));
//	printf("prime : %d\n", ft_is_prime(3));
//	printf("prime : %d\n", ft_is_prime(13));
//	printf("prime : %d\n", ft_is_prime(31));
	printf("n_prime : %d\n", ft_find_next_prime(38));
	printf("n_prime : %d\n", ft_find_next_prime(50));
	printf("n_prime : %d\n", ft_find_next_prime(70));
	printf("n_prime : %d\n", ft_find_next_prime(1000));
	printf("n_prime : %d\n", ft_find_next_prime(500));
	return 0;
}
