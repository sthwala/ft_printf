/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:29:27 by sthwala           #+#    #+#             */
/*   Updated: 2018/06/14 11:23:42 by sthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t index;

	index = 0;
	while (index < len)
	{
		if (ft_strlen(src) < len && index < ft_strlen(src))
			dst[index] = src[index];
		if (index > ft_strlen(src))
			dst[index] = '\0';
		else
			dst[index] = src[index];
		index++;
	}
	return (dst);
}
