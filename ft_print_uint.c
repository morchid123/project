/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momo <momo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 06:02:07 by momo              #+#    #+#             */
/*   Updated: 2025/11/22 06:34:42 by momo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int len(unsigned int n)
{
    int l = 0;
    while (n > 0)
    {
        n = n / 10;
        l++;
    }
    return l;
}
int ft_print_uint(unsigned int n)
{
    
    char c;
    if (n > 9)
	{
		ft_print_uint(n / 10);
        c = n % 10 + '0';
		write(1,&c,1);
    
	}
	else
    {
        c = n + '0';
		write(1,&c,1);
    }
        return len(n);
}
