/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:57:54 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/20 10:32:21 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    if (n == 0)
        return (0);
    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && (i < n - 1))
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
