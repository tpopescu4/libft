/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:44:55 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/20 10:44:58 by tpopescu         ###   ########.fr       */
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
		cpy[l] = s1[i];
		i++;
		l++;
	}
	cpy[l] = '\0';
	return (cpy);
}
