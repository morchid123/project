#include "ft_printf.h"
static int	int_length(int n)
{
	int	len = 1;
	if (n < 0)
		len++;
	while ((n /= 10))
		len++;
	return (len);
}

int	ft_print_int(int n)
{
	ft_putnbr_fd(n, 1);
	return (int_length(n));
}
