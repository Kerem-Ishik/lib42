/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:23:10 by kisik             #+#    #+#             */
/*   Updated: 2023/12/03 13:46:37 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

int	put_nbr_i(int nb)
{
    int i = 0;
	if (nb < 0)
	{
		i += put_char_i('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		put_nbr(nb / 10);
		put_nbr(nb % 10);
	}
	else
		i += put_char_i(nb + '0');
    return (i);
}
