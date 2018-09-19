/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 17:21:43 by sthwala           #+#    #+#             */
/*   Updated: 2018/06/13 16:02:56 by sthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s) + 1;
	while (--i)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
	}
	if (s[i] == ((char)c))
		return ((char *)s + i);
	return (NULL);
}
