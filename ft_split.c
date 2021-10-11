/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:57:49 by tpopescu          #+#    #+#             */
/*   Updated: 2021/10/08 15:36:33 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen2(const char *str, char c, size_t i)
{
	int	start;

	start = i;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i - start);
}

int	ft_count_w(const char *s, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (!s)
		return (0);
	if (s[0] != c)
		word++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			word++;
		i++;
	}
	if (word == 0)
		return (1);
	return (word);
}

char	*ft_put_w(const char *s, char c, int *i)
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

void	free_tab(char **tab, int i)
{
	while (i >= 0)
	{
		if (!tab[i])
			free(tab[i]);
		i--;
	}
	free(tab);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		word;
	char	**str;

	i = 0;
	j = 0;
	word = ft_count_w(s, c);
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_count_w(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < word && s[i])
	{
		str[j] = ft_put_w(s, c, &i);
		if (!str[j])
			free_tab(str, j);
		j++;
	}
	str[j] = NULL;
	return (str);
}
