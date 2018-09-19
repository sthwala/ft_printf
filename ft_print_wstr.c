/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_wstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 08:40:09 by sthwala           #+#    #+#             */
/*   Updated: 2018/08/17 09:46:55 by sthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int							ft_print_wstr(wchar_t *wstr, int precision)
{
	int						res;

	res = 0;
	if (wstr == NULL)
		return (ft_get_print_str("(null)", precision));
	while (*wstr != '\0')
	{
		res += ft_print_wchar(*wstr);
		wstr++;
	}
	return (res);
}
