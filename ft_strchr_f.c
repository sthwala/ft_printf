/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 09:09:38 by sthwala           #+#    #+#             */
/*   Updated: 2018/08/17 10:36:15 by sthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			ft_strchr_f(char *s, int c)
{
	char		*tmp;

	tmp = s;
	while (*tmp != '\0')
	{
		if (*tmp == c)
			return (1);
		tmp++;
	}
	if (*tmp == '\0' && c == '\0')
		return (0);
	return (0);
}
