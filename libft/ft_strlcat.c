/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:27:58 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/24 17:51:05 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	spaceleft;

	srclen = 0;
	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size > dstlen)
	{
		spaceleft = size - dstlen - 1;
		while (i < spaceleft && src[i] != '\0')
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
	}
	return (dstlen + srclen);
}
/*
int	main(void) 
{
	char	dst[20] = "Pedro";
	char	src[] = " Picapiedra";
	size_t	size = sizeof(dst);
	size_t	newlen = ft_strlcat(dst, src, size);
	
	printf("Concatena string: %s\n", dst);
	printf("nuevo tamaño: %zu\n", newlen);
	return (0);
}*/
