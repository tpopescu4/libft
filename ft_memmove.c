/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 20:49:15 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/22 21:37:21 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstd;
	char	*srcd;

	dstd = (char *)dst;
	srcd = (char *)src;
	if (dstd == srcd || len == 0)
		return (dstd);
	if (dstd > srcd)
	{
		while (len-- > 0)
			dstd[len] = srcd[len];
	}
	else
		dstd = ft_memcpy(dst, src, len);
	return (dstd);
}
