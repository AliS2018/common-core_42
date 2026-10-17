#include "libft.h"

static void	to_upper_all(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

static void	to_upper_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	main(void)
{
	char	a[] = "abc";
	char	b[] = "hello world";
	char	c[] = "abcdef";
	char	d[] = "";

	ft_striteri(a, to_upper_all);
	printf("[%s]\n", a);
	ft_striteri(b, to_upper_all);
	printf("[%s]\n", b);
	ft_striteri(c, to_upper_even);
	printf("[%s]\n", c);
	ft_striteri(d, to_upper_all);
	printf("[%s]\n", d);
	ft_striteri(NULL, to_upper_all);
	ft_striteri(a, NULL);
	printf("no crash on NULL\n");
	return (0);
}
