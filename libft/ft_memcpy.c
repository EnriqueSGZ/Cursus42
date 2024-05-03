/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:44:56 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/03 19:08:47 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*char_dst;
	char	*char_src;
	size_t	i;

	i = 0;
	char_dst = (char *)dst;
	char_src = (char *)src;
	while (i < n)
	{
		char_dst[i] = char_src[i];
		i++;
	}
	return (dst);
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
