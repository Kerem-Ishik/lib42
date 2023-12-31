/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:09:53 by kisik             #+#    #+#             */
/*   Updated: 2023/12/02 04:48:26 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

void *alloc(size_t size)
{
    void *ptr;
    ptr = malloc(size);
    if (!ptr)
        return (NULL);
    return (ptr);
}