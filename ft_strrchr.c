/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:48:36 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/30 17:30:25 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int		i;
	char	*st;

	i = ft_strlen(s);
	while (--i >= 0)
	{
		if (s[i] == c)
		{
			*st = s[i];
			return (st);
		}
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
