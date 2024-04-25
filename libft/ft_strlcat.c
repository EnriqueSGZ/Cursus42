/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:27:58 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/25 12:43:55 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	// Encuentra longitud actual del dst (hasta carácter nulo o tamaño max)
	while (dst[i] && i < dstsize)
	{
		i++;
	}
	len = i;// Almacena la longitud actual del destino en len
	// Copia src al destino, teniendo en cuenta tamaño máx del dst
	while (src[i - len] && i + 1 < dstsize)
	{
		dst[i] = src[i - len];// Copia el carácter actual de src a dst
		i++;
	}
	// Añade el carácter nulo al final del destino si hay espacio suficiente
	if (len < dstsize)
	{
		dst[i] = '\0';
	}
	return (len + ft_strlen(src));// Retorna len total de la cadena concatenada
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
