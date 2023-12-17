/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:30:37 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/17 15:18:24 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
int print_hex(unsigned long n);
int print_ptr(unsigned long n)
{
    size_t i;
    
    write(1, "0x", 2);
    i = print_hex(n) + 2;
    return (i);
}
int print_hex(unsigned long n)
{
    char			*tab; 
    int				i;

    tab = "0123456789abcdef";
    i = 0;
	if (n < 16)
	{
		i += print_char(tab[n]);
	}
	else
	{
		i += print_hex(n / 16);
		i += print_hex(n % 16);
	}
    return (i);
}

