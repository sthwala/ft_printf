/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:12:29 by sthwala           #+#    #+#             */
/*   Updated: 2018/06/09 13:49:44 by sthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
