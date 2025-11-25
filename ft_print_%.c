#include "ft_printf.h"

int ft_print_pr(char c)
{
    char f = '%';
    write(1,&f,1);
    return (1);
}