/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:57:59 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/25 12:22:24 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = 0;
	i = 0;
	// Si el tamaño del búfer de destino es 0, devuelve la longitud de src
	if (dstsize == 0)
	{
        ft_strlen(src);
	}
    return (i);
	// Copiamos hasta dstsize - 1 caracteres desde src a dst
    while (src[i] != '\0' && i < dstsize - 1) 
	{
        dst[i] = src[i];
        i++;
	}
	dst[i] = '\0';
	// Calculamos longitud de src
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	return (srclen);
}

/*
int main(void)
{
	char    src[] = "abdesdf";
	char    dst[] = "12345678"; 
	size_t  dstsize = sizeof(dst);
	
	ft_strlcpy(dst, src, dstsize);
	printf("Tamaño: %zu\n", dstsize);
	printf("Cadena copiada: %s\n", dst);

	return 0;
}*/
//copia de origen a destino terminando en null