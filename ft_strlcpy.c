/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:24:03 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/30 16:57:15 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;

	i = 0;
	if (dstsize == 0)
		return (0);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < dstsize - 1)
	{
		dst[i] = '\0';
		i++;
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
