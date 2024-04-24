/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:27:58 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/24 20:18:56 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (dst[i] && i < dstsize)
	{
		i++;
	}
	len = i;
	while (src[i - len] && i + 1 < dstsize)
	{
		dst[i] = src[i - len];
		i++;
	}
	if (len < dstsize)
	{
		dst[i] = '\0';
	}
	return (len + ft_strlen(src));
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
