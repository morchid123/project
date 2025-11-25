
#include "ft_printf.h"
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
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			count += ft_print_char(va_arg(args, int));
			i += 2;
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			count += ft_print_int(va_arg(args, int));
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'u' )
		{
			count += ft_print_uint(va_arg(args, int));
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == '%' )
		{
			count += ft_print_pr(va_arg(args, int));
			i += 2;
		}
		
		else if (format[i] == '%' && format[i + 1] == 's' )
		{
			count += ft_print_str(va_arg(args, char *));
			i += 2;
		}
		else if (format[i] == '%' && (format[i + 1] == 'x' ))
		{
			count += ft_print_HeX(va_arg(args, unsigned int), "0123456789abcdef");
			i += 2;
		}
		else if (format[i] == '%' && (format[i + 1] == 'X' ))
		{
			count += ft_print_HeX(va_arg(args, unsigned int), "0123456789ABCDEF");
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