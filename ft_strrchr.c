/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:41:03 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/13 12:52:51 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*st;

	i = ft_strlen(s) + 1;
	st = (char *)s;
	while (i-- > 0)
	{
		if(*(st + i) == c)
			return (st + i);
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
