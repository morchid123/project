#include "ft_printf.h"

int	ft_print_HeX(unsigned long n, char *base)
{
	int		count;
	int len = ft_strlen(base);
	count = 0;
	if (n >= (unsigned long)len)
		count = count + ft_print_HeX(n / len, base);

	write(1, &base[n % len], 1);
	count++;
	return (count);
}
