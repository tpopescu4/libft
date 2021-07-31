/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:44:55 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/30 18:49:56 by tpopescu         ###   ########.fr       */
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
int main()
{
	char a[] = "hola";
	char *b;

	b = ft_strdup(a);
	printf("%s\n", b);
	return 0;
}
