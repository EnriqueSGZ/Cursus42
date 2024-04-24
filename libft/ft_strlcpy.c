/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:57:59 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/24 20:24:53 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
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