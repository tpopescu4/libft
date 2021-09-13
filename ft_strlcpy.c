/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:24:03 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/13 14:53:29 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0' && i < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	while (i < dstsize)
	{
		dst[j] = '\0';
		i++;
		j++;
	}
	i = 0;
	while (dst[i] != '\0')
		i++;
	return (i);
}
