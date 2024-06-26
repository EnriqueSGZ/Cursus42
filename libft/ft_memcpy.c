/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:44:56 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/06 23:01:44 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*chardst;
	char	*charsrc;
	size_t	i;

	i = 0;
	chardst = (char *)dst;
	charsrc = (char *)src;
	if (!dst && !src)
	{
		return (0);
	}
	while (i < n)
	{
		chardst[i] = charsrc[i];
		i++;
	}
	return (chardst);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "esto se va a copiar a destino";
	char	dst[] = "";
	size_t	n = 30;

	ft_memcpy(dst, src, n);
	printf("%s\n", dst);
	return (0);
}*/
