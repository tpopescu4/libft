/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:07:26 by tpopescu          #+#    #+#             */
/*   Updated: 2021/08/14 20:38:15 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int	i;

	i = 0;
	while (n-- > 0)
	{
		((char *)dst)[i] = src[i];
		i++;
	}
	return (dst);
}
