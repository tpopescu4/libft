/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:48:36 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/13 13:36:59 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*st;

	i = 0;
	st = (char *)s;
	while (i < ft_strlen(s))
	{
		if (*(st + i) == c)
			return (st + i);
		st++;
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char *s;
	char d;
	char b[] = "abcdef123";

	d = 49;
	s = strchr(b, d);
	printf("%s\n", s);
	return 0;
}*/
