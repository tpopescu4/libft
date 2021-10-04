/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:32:08 by tpopescu          #+#    #+#             */
/*   Updated: 2021/10/04 22:18:11 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	c;
	char	*tab;

	i = 0;
	tab = (char *)haystack;
	c = ft_strlen(needle);
	if (c == 0 || haystack == needle)
		return (tab);
	while (tab[i] != '\0' && i < len)
	{
		j = 0;
		while (tab[i + j] != '\0' && needle[j] != '\0'
			&& tab[i + j] == needle[j] && i + j < len)
			j++;
		if (j == c)
			return (tab + i);
		i++;
	}
	return (NULL);
}
