#include "libft.h"
#include "limits.h"
static void	test(int n)
{
	char	*res;

	res = ft_itoa(n);
	if (!res)
	{
		printf("%d -> NULL\n", n);
		return ;
	}
	printf("%d -> [%s]\n", n, res);
	free(res);
}

int	main(void)
{
	test(0);
	test(5);
	test(-5);
	test(45);
	test(-45);
	test(100);
	test(-100);
	test(INT_MAX);
	test(INT_MIN);
	return (0);
}
