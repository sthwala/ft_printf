/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 16:58:47 by sthwala           #+#    #+#             */
/*   Updated: 2018/06/14 12:03:04 by sthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		c;
	int		i;
	int		j;
	char	*cpy;

	if (!s)
		return (NULL);
	j = -1;
	c = ft_strlen(s);
	while (c != 0 && s[--c])
		if (s[c] != ' ' && s[c] != '\n' && s[c] != '\t')
			break ;
	i = -1;
	while (c != 0 && s[++i])
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			break ;
	cpy = (char *)malloc(sizeof(*cpy) * (c - i + 2));
	if (cpy)
	{
		while (i <= (c + 1))
			cpy[++j] = s[i++];
		cpy[j] = '\0';
		return (cpy);
	}
	return (NULL);
}
