/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:57:49 by tpopescu          #+#    #+#             */
/*   Updated: 2021/10/04 20:54:21 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen2(const char *str, char c, size_t i)
{
	int	start;

	start = i;
	while (str[i] && str[i] != c)
		i++;
	return (i - start);
}

int	ft_cont_p(const char *s, char c)
{
	int	p;
	int	i;

	i = 0;
	p = 0;
	if (!s)
		return (0);
	if (s[0] != c)
		p++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			p++;
		i++;
	}
	if (p == 0)
		return (1);
	return (p);
}

char	*ft_put_p(const char *s, char c, int *i)
{
	char	*str;
	int		j;

	str = (char *)malloc(sizeof(char) * (ft_strlen2(s, c, *i) + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (s[*i] != c && s[*i])
	{
		str[j] = s[*i];
		j++;
		*i += 1;
	}
	str[j] = '\0';
	while (s[*i] == c && s[*i])
		*i += 1;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		p;
	char	**str;

	i = 0;
	j = 0;
	p = ft_cont_p(s, c);
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_cont_p(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < p && s[i])
	{
		str[j] = ft_put_p(s, c, &i);
		j++;
	}
	str[j] = NULL;
	return (str);
}
