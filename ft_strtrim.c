/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:42:54 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/20 12:26:44 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isinset(char s, char const *set)
{
    int i;
    i = 0;
    while (set[i])
    {
        if (set[i] == s)
            return (1);
        i++;
    }
    return (0);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     j;
    int     max;
    char    *s;

    if (!s1 || !set)
        return (NULL);
    i = 0;
    j = 0;
    max = ft_strlen(s1) - 1;
    while (ft_isinset(s1[max], set) == 1)
        max--;
    while (ft_isinset(s1[i], set) == 1)
        i++;
    max = max - i + 1;
    s = (char *)malloc(sizeof(char) * max + 1);
    if (!s)
        return (NULL);
    while (max-- > 0)
    {
        s[j] = s1[i];
        j++;
        i++;
    }
    s[j] = '\0';
    return (s);
}