/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:40:23 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/16 21:06:11 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_hexa_upper(unsigned int n)
{
    char			*tab; 
    int				i;

    tab = "0123456789ABCDEF";
    i = 0;
	if (n < 16)
	{
		i += print_char(tab[n]);
	}
	else
	{
		i += print_hexa_upper(n / 16);
		i += print_hexa_upper(n % 16);
	}
    return (i);
}
