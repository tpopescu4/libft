/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:48:36 by tpopescu          #+#    #+#             */
/*   Updated: 2021/10/04 22:05:51 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*st;

	i = 0;
	j = ft_strlen(s) + 1;
	st = (char *)s;
	while (i < j)
	{
		if (*st == (char)c)
			return (st);
		st++;
		i++;
	}
	return (NULL);
}
