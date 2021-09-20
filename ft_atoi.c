/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:10:00 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/20 12:47:45 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int long	i;
	int long	x;
	int long	n;

	i = 0;
	x = 0;
	n = 1;
	if ((str[i] >= 9 && str[i] <= 13)
		|| str[i] == 32 || str[i] == 43)
		i++;
	if (str[i] == 45)
	{
		n = -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		x *= 10;
		x += str[i] - 48;
		if ((x * n) < -2147483648)
			return (1);
		if (x > 2147483647)
			return (-1);
		i++;
	}
	x *= n;
	return (x);
}
/*
int main()
{
	const char *c = " 1245f2";
	printf("mi atoi\t%d\n", ft_atoi(c));
	printf("atoi\t%d\n", atoi(c));
	return 0;
}*/
