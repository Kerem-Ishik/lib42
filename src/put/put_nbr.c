/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:23:10 by kisik             #+#    #+#             */
/*   Updated: 2023/12/03 13:39:25 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

void	put_nbr(int nb)
{
	if (nb < 0)
	{
		put_char('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		put_nbr(nb / 10);
		put_nbr(nb % 10);
	}
	else
		put_char(nb + '0');
}
