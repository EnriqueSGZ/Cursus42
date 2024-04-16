/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:57:59 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/16 16:42:33 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t  i;
    
    i = 0;
    while (src[i] != '\0' && i + 1 < dstsize)
    {
        dst[i] = src[i];
        i++;
	}
    dst[i] = '\0';
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
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