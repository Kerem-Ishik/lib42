/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_n.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:09:53 by kisik             #+#    #+#             */
/*   Updated: 2023/11/16 16:08:18 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

void *alloc_n(size_t size)
{
    void *ptr;

    ptr = malloc(size);
    if (!ptr)
        return (NULL);
    return (ptr);
}