/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 20:51:28 by tpopescu          #+#    #+#             */
/*   Updated: 2021/10/04 22:06:02 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sd;

	sd = (char *)s;
	while (n-- > 0)
	{
		if (*sd == (char)c)
			return (sd);
		sd++;
	}
	return (NULL);
}
