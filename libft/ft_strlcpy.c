/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:57:59 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/14 16:51:45 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char	ft_strlcpy(char *dst, char *src)
{
	unsigned int    i;
    
    i = 0;
    while (dst[i] != '\0')
    {
        dst[i] = src[i];
        i++;
	}
    dst[i] = '\0';
	return (dst);
}*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char src[] = "123";
    char dst[10] = "67890";

    printf("Cadena destino antes de strlcpy: %s\n", dst);
    
    size_t copied = strlcpy(dst, src, sizeof(dst));

    printf("Cadena destino después de strlcpy: %s\n", dst);
    printf("Tamaño de la cadena copiada: %zu\n", copied);

    return 0;
}

