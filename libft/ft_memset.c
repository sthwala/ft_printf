/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 09:05:24 by sthwala           #+#    #+#             */
/*   Updated: 2018/06/13 16:38:04 by sthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	k;
	size_t			i;
	char			*str;

	i = 0;
	k = (unsigned char)c;
	str = (char *)s;
	while (len > 0)
	{
		str[i] = k;
		len--;
		i++;
	}
	return (str);
}
