/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:47:29 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/22 21:36:25 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*f;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s) - 1)
		return (ft_strdup (""));
	f = (char *)malloc(sizeof(char) * len + 1);
	if (!f)
		return (NULL);
	i = 0;
	while (i < len)
	{
		f[i] = s[start];
		i++;
		start++;
	}
	f[i] = '\0';
	return (f);
}
