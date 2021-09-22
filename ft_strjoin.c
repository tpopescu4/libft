/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:54:39 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/22 21:43:36 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*a;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	a = malloc(sizeof(char) * (1 + ft_strlen(s1) + ft_strlen(s2)));
	if (!a)
		return (NULL);
	while (s1[i])
		a[i++] = s1[j++];
	j = 0;
	while (s2[j])
		a[i++] = s2[j++];
	a[i] = '\0';
	return (a);
}
