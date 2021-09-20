/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:48:36 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/20 10:32:18 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strchr(const char *s, int c)
{
    int     i;
    char    *st;

    i = 0;
    st = (char *)s;
    while (i < ft_strlen(s) + 1)
    {
        if (*st == c)
            return (st);
        st++;
        i++;
    }
    return (NULL);
}
