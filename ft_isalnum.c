/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:19:13 by tpopescu          #+#    #+#             */
/*   Updated: 2021/07/30 15:53:01 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	a;
	int	b;

	a = ft_isalpha(c);
	b = ft_isdigit(c);
	if (a == 1 || b == 1)
		return (1);
	else
		return (0);
}
