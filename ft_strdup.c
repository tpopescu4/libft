/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:44:55 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/13 13:24:16 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		l;
	int		i;
	char	*cpy;

	l = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(char) * l + 1);
	if (!cpy)
		return (NULL);
	l = 0;
	i = 0;
	while (s1[i])
	{
		cpy[i] = s1[l];
		i++;
		l++;
	}
	cpy[i] = '\0';
	return (cpy);
}
