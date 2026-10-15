#include <unistd.h>
#include <limits.h>
#include "libft.h"

static void	test(int n)
{
	write(1, "[", 1);
	ft_putnbr_fd(n, 1);
	write(1, "]\n", 2);
}

int	main(void)
{
	test(0);
	test(5);
	test(-5);
	test(10);
	test(-10);
	test(42);
	test(-42);
	test(100);
	test(INT_MAX);
	test(INT_MIN);
	return (0);
}
