/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:41:05 by sthwala           #+#    #+#             */
/*   Updated: 2018/06/15 12:33:40 by sthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	long	result;
	int		counter;

	result = 0;
	sign = 1;
	counter = 0;
	while (str[counter] == 32 || (str[counter] >= 9 && str[counter] <= 13))
		counter++;
	if (str[counter] == '-')
		sign = -1;
	if (str[counter] == '-' || str[counter] == '+')
		counter++;
	while (str[counter] && ft_isdigit(str[counter]))
	{
		result = (result * 10) + (str[counter++] - '0');
		if (result < 0 && sign > 0)
			return (-1);
		if (result < 0 && sign < 0)
			return (0);
	}
	return (sign * result);
}
