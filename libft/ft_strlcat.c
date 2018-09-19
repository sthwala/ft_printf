/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 17:01:22 by sthwala           #+#    #+#             */
/*   Updated: 2018/06/15 10:54:21 by sthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t d_size;
	size_t s_size;

	i = 0;
	s_size = 0;
	while (dst[i])
		i++;
	while (src[s_size])
		s_size++;
	d_size = i;
	while (*src && i + 1 < size)
		dst[i++] = *(src++);
	dst[i] = 0;
	if (d_size > size)
		return (s_size + size);
	else
		return (s_size + d_size);
}
