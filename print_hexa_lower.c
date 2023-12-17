/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:34:53 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/17 20:04:04 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa_lower(unsigned int n)
{
	char	*tab;
	int		i;

	tab = "0123456789abcdef";
	i = 0;
	if (n < 16)
	{
		i += print_char(tab[n]);
	}
	else
	{
		i += print_hexa_lower(n / 16);
		i += print_hexa_lower(n % 16);
	}
	return (i);
}
