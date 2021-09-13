/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 20:49:15 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/13 13:17:11 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	int		j;
	char	*dstd;
	char	*srcd;

	dstd = (char *)dst;
	srcd = (char *)src;
	i = 0;
	j = 0;
	if (dstd == srcd || len == 0)
		return (dstd);
	while (len-- > 0)
	{
		dstd[i] = srcd[j];
		i++;
		j++;
	}
	return (dstd);
}
