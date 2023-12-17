/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:23:18 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/17 14:54:03 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int n)
{
	int	nb;
    int	i;

    i = 0;
	nb = n;
	if (n == -2147483648)
	{
		i += print_str("-2147483648");
		return (i);
	}
	if (n < 0)
	{
		i += print_char('-');
		nb *= -1;
	}
	if (nb < 10)
		i += print_char(nb + '0');
	else
	{
		i += print_nbr(nb / 10);
		i += print_nbr(nb % 10);
	}
    return (i);
}
