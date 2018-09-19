/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 09:12:18 by sthwala           #+#    #+#             */
/*   Updated: 2018/08/17 10:35:31 by sthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		i;

	i = ft_strlen(src);
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (!dst)
	{
		return (NULL);
	}
	while (i >= 0)
	{
		dst[i] = src[i];
		i--;
	}
	return (dst);
}
