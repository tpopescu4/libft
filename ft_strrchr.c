/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:41:03 by tpopescu          #+#    #+#             */
/*   Updated: 2021/10/04 22:05:11 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*st;

	st = (char *)s;
	i = ft_strlen(s) + 1;
	while (i-- > 0)
	{
		if (*(st + i) == (char)c)
			return (st + i);
	}
	return (NULL);
}
