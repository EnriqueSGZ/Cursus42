/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:39:29 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/06 20:12:17 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*chardst;
	char	*charsrc;
	size_t	i;

	i = 0;
	chardst = (char *)dst;
	charsrc = (char *)src;
	if (dst < src)
	{
		while (len > 0)
		{
			chardst[i] = charsrc[i];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			chardst[i] = charsrc[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	str[] = "Hola Mundo";
	char	dst[] = "destino";
	size_t	size = 5;

	ft_memmove(dst, str, size);
	printf("%s\n", str);
	return (0);
}*/
