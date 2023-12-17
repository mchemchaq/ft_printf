/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemcha <mchemcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:48:22 by mchemcha          #+#    #+#             */
/*   Updated: 2023/12/17 17:13:19 by mchemcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int    ft_check(const char *s, int *i, int *c, va_list ap)
{
    if(s[(*i)] == '%' && s[(*i) + 1])
    {
        if (s[(*i) + 1] == 's')
            *c += print_str(va_arg(ap, char *));
        else if (s[(*i) + 1] == 'c')
            *c += print_char(va_arg(ap, int));
        else if (s[(*i) + 1] == 'p')
            *c += print_ptr(va_arg(ap, unsigned long));
        else if (s[(*i) + 1] == 'd' || s[(*i) + 1] == 'i')
            *c += print_nbr(va_arg(ap, int));
        else if (s[(*i) + 1] == 'u')
            *c += print_nbr_u(va_arg(ap, unsigned int));
        else if (s[(*i) + 1] == 'X')
            *c += print_hexa_upper(va_arg(ap, size_t));
        else if (s[(*i) + 1] == 'x')
            *c += print_hexa_lower(va_arg(ap, size_t));
        else if (s[(*i) + 1] == '%')
        {
            print_char('%');
            *c += 1;
        }
        (*i)++;
        return (0);
    }
    return (1);
}

int ft_printf(const char *s, ...)
{
    va_list ap;
    int i;
    int c;

    i = 0;
    c = 0;
    va_start(ap, s);
    while (s[i]) 
    {
        if (ft_check(s, &i, &c, ap))
        {
            print_char(s[i]);
            c++;
        }
        if (s[i])
            i++;
    }
    va_end(ap);
    return (c);
    
}
// int main()
// {
//     // fclose(stdout);
//     int i = ft_printf("kjh");
//     // fprintf(stderr, "%d", i);
// }