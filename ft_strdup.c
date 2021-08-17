/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:44:55 by tpopescu          #+#    #+#             */
/*   Updated: 2021/08/17 16:58:10 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		l;
	char	*cpy;

	l = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(char) * l);
	if (!cpy)
		return (NULL);
	l = 0;
	while (s1[l] != '\0')
	{
		cpy[l] = s1[l];
		l++;
	}
	return (cpy);
}
