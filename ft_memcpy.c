/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:07:26 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/13 13:15:39 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	size_t	j;
	char	*dstd;
	char	*srcd;

	dstd = (char *)dst;
	srcd = (char *)src;
	i = 0;
	j = 0;
	if (dstd == srcd || n == 0)
		return (dstd);
	while (n-- > 0)
	{
		dstd[i] = srcd[j];
		i++;
		j++;
	}
	return (dstd);
}
