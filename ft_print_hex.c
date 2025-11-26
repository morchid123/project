#include "ft_printf.h"

int	ft_print_HeX(unsigned long n, char *base)
{
	int		count;
	int	tmp;
	unsigned long base_leen = 16;     
	count = 0;
	if (n >= base_leen)
	{
		tmp = ft_print_HeX(n / base_leen, base);
		count += tmp;
	}
		

	write(1, &base[n % base_leen], 1);
	count++;
	return (count);
}
