#include "ft_printf.h"

int ft_print_adr(void *ptr)
{
    int          len;
    unsigned long addr;
	if(!ptr)
	{
		write(1,"(nil)",5);
		return (5);
	}
		
    write(1, "0x", 2);
    addr = (unsigned long)ptr;
    len = ft_print_HeX(addr, "0123456789abcdef");
    return (2 + len);
}
