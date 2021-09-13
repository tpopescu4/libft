/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 20:51:28 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/13 12:39:05 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sd;

	sd = (char *)s;
	while (n-- > 0)
	{
		if (*sd == c)
			return (sd);
		sd++;
	}
	return (NULL);
}
