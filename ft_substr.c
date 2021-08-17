/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:47:29 by tpopescu          #+#    #+#             */
/*   Updated: 2021/08/17 17:02:13 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*f;

	f = (char *)malloc(sizeof(char) * len - start);
	if (!f)
		return (NULL);
	i = 0;
	while (start < len)
	{
		f[i] = s[start];
		i++;
		start++;
	}
	return (f);
}
