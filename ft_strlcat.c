/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:33:05 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/22 20:06:46 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	x;
	size_t	len;

	x = 0;
	len = ft_strlen(dest);
	if (len < size)
	{
		i = ft_strlen(src) + len;
		if (size > i + 1)
			j = i + 1;
		else
			j = size;
		while (x + 1 < j - len)
		{
			dest[len + x] = src[x];
			x++;
		}
		dest[len + x] = '\0';
	}
	else
		i = ft_strlen(src) + size;
	return (i);
}
