/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:20:23 by kisik             #+#    #+#             */
/*   Updated: 2023/12/03 17:08:50 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

int print_format(char format, va_list ap)
{
    int count = 0;
    if(format == 'c')
        count += put_char_i(va_arg(ap, int));
    else if(format == 's')
        count += put_str_i(va_arg(ap, char *));
    else if(format == 'd')
        count += put_nbr_i((long)(va_arg(ap, int)));
    else if(format == 'x')
        count += put_hex_i((va_arg(ap, unsigned int)));
    else if(format == 'p')
        count += put_ptr_i(va_arg(ap, void *));
    else
        count += put_char_i(format);
    return (count);
}

int print(const char *str, ...)
{
    int count;
    va_list ap;   
    
    count = 0;
    va_start(ap, str);
    while(*str != '\0')
    {
        if(*str == '%')
            count += print_format(*(++str), ap);
        else
            count += put_char_i(*str);
        str++;
    }
    va_end(ap);
    return (count);
}
