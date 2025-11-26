#  ifndef FT_PRINTF_H
#  define FT_PRINTF_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_printf(const char *format, ...);
int ft_print_int(int n);
int	ft_print_char(char c);
int ft_print_uint(unsigned int n);
int ft_print_str(char *str);
int ft_print_percent(void);
int	ft_print_HeX(unsigned long n, char *base);
int ft_print_adr(void *ptr);


#  endif
