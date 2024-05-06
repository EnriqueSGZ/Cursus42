/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:39:29 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/06 22:12:26 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*chardst;
	const char	*charsrc;

	chardst = (char *)dst;
	charsrc = (const char *)src;
	if (!dst && !src)
		return (dst);
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
		{
			chardst[len] = charsrc[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*
int	main(void)
{
	char	str[] = "Hola Mundo";
	char	dst[] = "destino";
	size_t	size = 5;

	ft_memmove(dst, str, size);
	printf("%s\n", dst);
	return (0);
}*/
