/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:16:24 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/17 20:06:39 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> 
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *s, ...);
int	print_char(char n);
int	print_str(char *n);
int	print_nbr(int n);
int	print_hexa_lower(unsigned int n);
int	print_hexa_upper(unsigned int n);
int	print_ptr(unsigned long n);
int	print_nbr_u(unsigned int n);
#endif