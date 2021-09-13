/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:57:54 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/13 13:36:25 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		j;

	if (n == 0 || s1 == s2)
		return (0);
	i = 0;
	while (n-- > 0)
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char a[] = "abC";
	char b[] = "abc";

	printf("%d\n", ft_strncmp(a, b, 2));
	printf("%d\n", strncmp(a, b, 2));
	return 0;
}*/
