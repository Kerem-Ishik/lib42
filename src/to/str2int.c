/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str2int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:04:24 by kisik             #+#    #+#             */
/*   Updated: 2023/12/03 01:58:35 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

int	str2int(char *str)
{
	int neg;
	int num;
	int i;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg *= -1;
		}
		i++;
	}
	while (is_digit(str[i]))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * neg);
}