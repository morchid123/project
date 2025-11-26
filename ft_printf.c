
#include "ft_printf.h"
static int	handle_format(const char *format, int i, va_list args)
{
	if (format[i + 1] == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (format[i + 1] == 'u')
		return (ft_print_uint(va_arg(args, unsigned int)));
	else if (format[i + 1] == '%')
		return (ft_print_percent());
	else if (format[i + 1] == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (format[i + 1] == 'x')
		return (ft_print_HeX(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (format[i + 1] == 'X')
		return (ft_print_HeX(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (format[i + 1] == 'p')
		return (ft_print_adr(va_arg(args, void *)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += handle_format(format, i, args);
			i += 2;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
