/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 20:54:00 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/20 12:34:19 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	unsigned char	*s1d;
	unsigned char	*s2d;

	s1d = (unsigned char *)s1;
	s2d = (unsigned char *)s2;
	i = 0;
	while (n-- > 0)
	{
		if (s1d[i] != s2d[i])
			return (s1d[i] - s2d[i]);
		i++;
	}
	return (0);
}
