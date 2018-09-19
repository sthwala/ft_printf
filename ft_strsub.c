/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 09:17:32 by sthwala           #+#    #+#             */
/*   Updated: 2018/08/17 10:33:19 by sthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	counter;
	char	*temp;

	counter = 0;
	if (!s)
	{
		return (NULL);
	}
	temp = (char *)malloc((len + 1) * sizeof(char));
	if (!temp)
	{
		return (NULL);
	}
	while (counter < len)
	{
		temp[counter] = s[start];
		counter++;
		start++;
	}
	temp[counter] = '\0';
	return (temp);
}
