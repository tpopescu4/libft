/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:42:54 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/22 20:19:53 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		l;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != 0 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == 0)
		return (ft_strdup(""));
	l = ft_strlen(s1);
	while (ft_strchr(set, s1[l]))
		l--;
	str = ft_substr(s1, 0, l + 1);
	return (str);
}
