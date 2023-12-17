/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:51:28 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/16 16:43:26 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ft_printf.h"

int print_nbr_u(unsigned int n)
{
    int i;
    i = 0;
    
    if (n < 10)
	{
		i += print_char(n + '0');

	}
    else
	{
		i += print_nbr(n / 10);
		i += print_nbr(n % 10);
	}
    return (i);
}
