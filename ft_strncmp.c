/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:57:54 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/30 16:57:22 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
	{
		if (s1[i] != s2[i])
		{
			i = s1[i] - s2[i];
			return (i);
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
