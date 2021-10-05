/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:39:35 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/22 21:32:06 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numdig(int n)
{
	int	num;

	num = 1;
	if (n < 10)
		return (num);
	while (n > 9)
	{
		n /= 10;
		num++;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	int		neg;
	int		len;
	char	*tab;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	if (n < 0)
		neg = 1;
	if (neg == 1)
		n *= -1;
	len = ft_numdig(n);
	tab = (char *)malloc(sizeof(char) * len + neg + 1);
	if (!tab)
		return (NULL);
	tab[len + neg] = '\0';
	while (len > 0)
	{
		tab[len + neg] = n % 10 + 48;
		n /= 10;
		len--;
	}
	if (neg == 1)
		tab[0] = '-';
	return (tab);
}
