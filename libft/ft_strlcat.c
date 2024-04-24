/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:27:58 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/24 18:23:24 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dstlen;
	size_t		totallen;
	const char	*s;

	if ((!dst || !src) && !size)
		return (0);
	s = src;
	dstlen = 0;
	while (*(dst + dstlen) && dstlen < size)
		dstlen++;
	if (dstlen < size)
		totallen = dstlen + strlen(s);
	else
		return (size + strlen(s));
	while (*s && (dstlen + 1) < size)
	{
		*(dst + dstlen) = *s++;
		dstlen++;
	}
	*(dst + dstlen) = '\0';
	return (totallen);
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
