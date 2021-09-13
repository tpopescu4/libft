/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:33:05 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/13 12:51:13 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = ft_strlen(dst);
	l = dstsize - ft_strlen(src) - 1;
	while (src[i] != '\0' && i < l)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	while (i++ < l)
		dst[j] = '\0';
	return (ft_strlen(dst));
}
