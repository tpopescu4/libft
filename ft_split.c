/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:57:49 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/08 21:03:17 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numchr(char const *s, char c, int a);
int	ft_findstr(char const *s, char c, int a);
int	ft_numstr(char const *s, char c);
char	**ft_split(char const *s, char c);

int	ft_numchr(char const *s, char c, int a)
{
	int	i;
	int j;
	i = 0;
	j = ft_findstr(s, c, a);
	while (s[j] && s[j] != c)
	{
		i++;
		j++;
	}
	return (i);
}

int	ft_findstr(char const *s, char c, int a)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	if (a == 0 && s[i] != c)
		return (i);
	if (s[0] != c)
	{
		i++;
		j++;
	}
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
		   j++;
		if (j == a)
			return (i);
		i++;
	}
	return (i);
}

int	ft_numstr(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s[0] != c)
		j++;
	while (s[i + 1] != c)
		i++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		a;

	tab = (char **)malloc(sizeof(char *) * ft_numstr(s, c));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ft_numstr(s, c))
	{
		tab[i] = (char *)malloc(sizeof(char) * ft_numchr(s, c, i) + 1);
		if (!tab[i])
			return (NULL);
		j = 0;
		a = ft_findstr(s, c, i);
		while (s[a] != c)
		{
			tab[i][j] = s[a];
			j++;
			a++;
		}
		tab[i][j] = '\0';
		i++;
	}
	
	return (tab);
}
int		main(void)
{
	char **tab;
	char s[] = "****Hey*BROOOO***quetal*a***";
	tab = ft_split(s, '*');
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);
	system("leaks a.out");
	return (0);
}
