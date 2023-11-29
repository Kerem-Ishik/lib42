/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtract.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:17:18 by kisik             #+#    #+#             */
/*   Updated: 2023/11/16 07:43:22 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

int subtract(int num, ...)
{
    va_list ap;
    int sum;
    int next;

    va_start(ap, num);
    
    sum = va_arg(ap, int);
    while (num-- > 1)
    {
        next = va_arg(ap, int);
        sum -= next;
    }
    va_end(ap);

    return sum;
}