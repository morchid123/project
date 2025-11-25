// ft_printf.c

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			count += ft_print_int(va_arg(args, int)); // استخراج وطباعة العدد الصحيح
			i += 2; // تجاوز % و d/i
		}
		else
		{
			write(1, &format[i], 1); // طباعة الحرف العادي
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}

int main()
{
    printf(" result to testadd = %d\n" ,testadd(1,5,10,20,3,50,70));
}