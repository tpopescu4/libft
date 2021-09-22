/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpopescu <tpopescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:07:26 by tpopescu          #+#    #+#             */
/*   Updated: 2021/09/22 22:10:37 by tpopescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	size_t	j;
	char	*dstd;
	char	*srcd;

	dstd = (char *)dst;
	srcd = (char *)src;
	i = 0;
	j = 0;
	if (dstd == srcd || n == 0)
		return (dstd);
	while (n-- > 0)
	{
		dstd[i] = srcd[j];
		i++;
		j++;
	}
	return (dstd);
}
/*
int	main(void)
{
	const char	src[50] = "Copiado";
	char		dest[50];
	strcpy(dest, "Sin Copiar");
	printf("Before->dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("After->dest = %s\n", dest);
	return (0);
}
*/
